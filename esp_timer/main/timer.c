/* Timer group-hardware timer example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include <stdio.h>
#include "esp_types.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "soc/timer_group_struct.h"
#include "driver/periph_ctrl.h"
#include "driver/timer.h"

#include "esp_timer.h"

esp_timer_handle_t test_p_handle = 0;
esp_timer_handle_t test_o_handle = 0;

void test_timer_periodic_cb(void *arg);
void test_timer_once_cb(void *arg);

esp_timer_create_args_t test_once_arg = {
	.callback = &test_timer_once_cb,
	.arg = NULL,//&arg_prop,
    .name = "TestOnceTimer"
};

esp_timer_create_args_t test_periodic_arg = {
	.callback = &test_timer_periodic_cb,
	.arg = NULL,//&arg_prop,
    .name = "TestPeriodicTimer"
};

void test_timer_periodic_cb(void *arg)
{

	int64_t tick = esp_timer_get_time();
	if(tick>100000000){
		esp_err_t err = esp_timer_stop(test_p_handle);
		printf("esp_timer_%s_stop:%s",test_periodic_arg.name,err==ESP_OK?"ok!\r\n":"failed!\r\n");
		err = esp_timer_delete(test_p_handle);
		printf("esp_timer_%s_delete:%s",test_periodic_arg.name,err==ESP_OK?"ok!\r\n":"failed!\r\n");
	}
	printf("%s:tick = %lld\r\n",__func__,tick);
	
}

void test_timer_once_cb(void *arg)
{
	int64_t tick = esp_timer_get_time();
	printf("%s:tick = %lld\r\n",__func__,tick);
	esp_err_t err = esp_timer_delete(test_o_handle);
	printf("esp_timer_%s_delete:%s",test_once_arg.name,err==ESP_OK?"ok!\r\n":"failed!\r\n");
}

void app_main()
{
	esp_err_t err = esp_timer_create(&test_periodic_arg,&test_p_handle);
	printf("esp_timer_create:%s",err==ESP_OK?"ok!\r\n":"failed!\r\n");
	err = esp_timer_start_periodic(test_p_handle, 1000*1000);
	printf("esp_timer_start_periodic:%s",err==ESP_OK?" ok!\r\n":" failed!\r\n");

	err = esp_timer_create(&test_once_arg,&test_o_handle);
	printf("esp_timer_create:%s",err==ESP_OK?"ok!\r\n":"failed!\r\n");
	err = esp_timer_start_once(test_o_handle, 10*1000*1000);
	printf("esp_timer_start_periodic:%s",err==ESP_OK?" ok!\r\n":" failed!\r\n");

}

