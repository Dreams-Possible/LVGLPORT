#include<stdio.h>
#include"freertos/FreeRTOS.h"
#include"freertos/task.h"

#include"lvgl/lvgl.h"
#include"lvgl_port_display.h"
#include"lvgl_port_touch.h"

void app_main(void)
{
    //screen device init
    //screen_init();

    //touch device init
    //touch_init();

    //lvgl init
    lv_init();

    //lvgl port display init
    lvgl_port_display_init();

    //lvgl port touch init
    lvgl_port_touch_init();

    //lvgl ui init
    //ui_init();

    while(1)
    {
        lv_tick_inc(10);
        lv_task_handler();
        vTaskDelay(pdMS_TO_TICKS(10));
    }

}
