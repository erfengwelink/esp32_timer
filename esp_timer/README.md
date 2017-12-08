# Example: esp_timer demo

This example uses the esp_timer driver to generate timers.

## Functionality Overview

/*


*/

```
    Example timer debugs:
I (0) cpu_start: App cpu up.
I (196) heap_init: Initializing. RAM available for dynamic allocation:
I (203) heap_init: At 3FFAE6E0 len 00001920 (6 KiB): DRAM
I (209) heap_init: At 3FFB2970 len 0002D690 (181 KiB): DRAM
I (215) heap_init: At 3FFE0440 len 00003BC0 (14 KiB): D/IRAM
I (222) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (228) heap_init: At 40088580 len 00017A80 (94 KiB): IRAM
I (234) cpu_start: Pro cpu start user code
I (252) cpu_start: Starting scheduler on PRO CPU.
I (0) cpu_start: Starting scheduler on APP CPU.
esp_timer_create:ok!
esp_timer_start_periodic: ok!
esp_timer_create:ok!
esp_timer_start_periodic: ok!
test_timer_periodic_cb:tick = 1002544
test_timer_periodic_cb:tick = 2002528
test_timer_periodic_cb:tick = 3002528
test_timer_periodic_cb:tick = 4002528
test_timer_periodic_cb:tick = 5002528
test_timer_periodic_cb:tick = 6002528
test_timer_periodic_cb:tick = 7002528
test_timer_periodic_cb:tick = 8002528
test_timer_periodic_cb:tick = 9002528
test_timer_periodic_cb:tick = 10002527
test_timer_once_cb:tick = 10007300
esp_timer_#TestOnceTimer_#stop:failed!
esp_timer_#TestOnceTimer_#delete:ok!
test_timer_periodic_cb:tick = 11002528
test_timer_periodic_cb:tick = 12002528
test_timer_periodic_cb:tick = 13002528
test_timer_periodic_cb:tick = 14002528
test_timer_periodic_cb:tick = 15002528
test_timer_periodic_cb:tick = 16002528
test_timer_periodic_cb:tick = 17002528
test_timer_periodic_cb:tick = 18002528
test_timer_periodic_cb:tick = 19002528
test_timer_periodic_cb:tick = 20002528
test_timer_periodic_cb:tick = 21002528
test_timer_periodic_cb:tick = 22002528
test_timer_periodic_cb:tick = 23002528
test_timer_periodic_cb:tick = 24002528
test_timer_periodic_cb:tick = 25002528
test_timer_periodic_cb:tick = 26002528
test_timer_periodic_cb:tick = 27002528
test_timer_periodic_cb:tick = 28002528
test_timer_periodic_cb:tick = 29002528
test_timer_periodic_cb:tick = 30002528
test_timer_periodic_cb:tick = 31002528
test_timer_periodic_cb:tick = 32002528
test_timer_periodic_cb:tick = 33002528
test_timer_periodic_cb:tick = 34002528
test_timer_periodic_cb:tick = 35002528
test_timer_periodic_cb:tick = 36002528
test_timer_periodic_cb:tick = 37002528
test_timer_periodic_cb:tick = 38002528
test_timer_periodic_cb:tick = 39002528
test_timer_periodic_cb:tick = 40002528
test_timer_periodic_cb:tick = 41002528
test_timer_periodic_cb:tick = 42002528
test_timer_periodic_cb:tick = 43002528
test_timer_periodic_cb:tick = 44002528
test_timer_periodic_cb:tick = 45002528
test_timer_periodic_cb:tick = 46002528
test_timer_periodic_cb:tick = 47002528
test_timer_periodic_cb:tick = 48002528
test_timer_periodic_cb:tick = 49002528
test_timer_periodic_cb:tick = 50002528
test_timer_periodic_cb:tick = 51002528
test_timer_periodic_cb:tick = 52002528
test_timer_periodic_cb:tick = 53002528
test_timer_periodic_cb:tick = 54002528
test_timer_periodic_cb:tick = 55002528
test_timer_periodic_cb:tick = 56002528
test_timer_periodic_cb:tick = 57002528
test_timer_periodic_cb:tick = 58002528
test_timer_periodic_cb:tick = 59002528
test_timer_periodic_cb:tick = 60002528
test_timer_periodic_cb:tick = 61002528
test_timer_periodic_cb:tick = 62002528
test_timer_periodic_cb:tick = 63002528
test_timer_periodic_cb:tick = 64002528
test_timer_periodic_cb:tick = 65002528
test_timer_periodic_cb:tick = 66002528
test_timer_periodic_cb:tick = 67002528
test_timer_periodic_cb:tick = 68002528
test_timer_periodic_cb:tick = 69002528
test_timer_periodic_cb:tick = 70002528
test_timer_periodic_cb:tick = 71002528
test_timer_periodic_cb:tick = 72002528
test_timer_periodic_cb:tick = 73002528
test_timer_periodic_cb:tick = 74002528
test_timer_periodic_cb:tick = 75002528
test_timer_periodic_cb:tick = 76002528
test_timer_periodic_cb:tick = 77002528
test_timer_periodic_cb:tick = 78002528
test_timer_periodic_cb:tick = 79002528
test_timer_periodic_cb:tick = 80002528
test_timer_periodic_cb:tick = 81002528
test_timer_periodic_cb:tick = 82002528
test_timer_periodic_cb:tick = 83002528
test_timer_periodic_cb:tick = 84002528
test_timer_periodic_cb:tick = 85002528
test_timer_periodic_cb:tick = 86002528
test_timer_periodic_cb:tick = 87002528
test_timer_periodic_cb:tick = 88002528
test_timer_periodic_cb:tick = 89002528
test_timer_periodic_cb:tick = 90002528
test_timer_periodic_cb:tick = 91002528
test_timer_periodic_cb:tick = 92002528
test_timer_periodic_cb:tick = 93002528
test_timer_periodic_cb:tick = 94002528
test_timer_periodic_cb:tick = 95002528
test_timer_periodic_cb:tick = 96002528
test_timer_periodic_cb:tick = 97002528
test_timer_periodic_cb:tick = 98002528
test_timer_periodic_cb:tick = 99002528
esp_timer_#TestPeriodicTimer_#stop:ok!
esp_timer_#TestPeriodicTimer_#delete:ok!
test_timer_periodic_cb:tick = 100002528


```
