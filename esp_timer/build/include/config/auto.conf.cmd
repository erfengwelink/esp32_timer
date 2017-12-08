deps_config := \
	/home/espressif/esp/esp-idf/components/app_trace/Kconfig \
	/home/espressif/esp/esp-idf/components/aws_iot/Kconfig \
	/home/espressif/esp/esp-idf/components/bt/Kconfig \
	/home/espressif/esp/esp-idf/components/esp32/Kconfig \
	/home/espressif/esp/esp-idf/components/ethernet/Kconfig \
	/home/espressif/esp/esp-idf/components/fatfs/Kconfig \
	/home/espressif/esp/esp-idf/components/freertos/Kconfig \
	/home/espressif/esp/esp-idf/components/heap/Kconfig \
	/home/espressif/esp/esp-idf/components/libsodium/Kconfig \
	/home/espressif/esp/esp-idf/components/log/Kconfig \
	/home/espressif/esp/esp-idf/components/lwip/Kconfig \
	/home/espressif/esp/esp-idf/components/mbedtls/Kconfig \
	/home/espressif/esp/esp-idf/components/openssl/Kconfig \
	/home/espressif/esp/esp-idf/components/pthread/Kconfig \
	/home/espressif/esp/esp-idf/components/spi_flash/Kconfig \
	/home/espressif/esp/esp-idf/components/spiffs/Kconfig \
	/home/espressif/esp/esp-idf/components/tcpip_adapter/Kconfig \
	/home/espressif/esp/esp-idf/components/wear_levelling/Kconfig \
	/home/espressif/esp/esp-idf/components/bootloader/Kconfig.projbuild \
	/home/espressif/esp/esp-idf/components/esptool_py/Kconfig.projbuild \
	/home/espressif/esp/esp-idf/components/partition_table/Kconfig.projbuild \
	/home/espressif/esp/esp-idf/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
