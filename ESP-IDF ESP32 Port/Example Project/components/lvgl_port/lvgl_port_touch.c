#include"lvgl_port_touch.h"
//enable lvgl port
#ifdef LVGL_PORT_TOUCH_H

//read touch data
static void read(lv_indev_t*indev_drv,lv_indev_data_t*data);
//lvgl port touch init
void lvgl_port_touch_init();

//read touch data
static void read(lv_indev_t*indev_drv,lv_indev_data_t*data)
{
    // static int32_t x=0;
    // static int32_t y=0;
    // if(any_touch())
    // {
    //     touch_read(&x,&y);
    //     data->state=LV_INDEV_STATE_PRESSED;
    // }
    // else
    // {
    //     data->state=LV_INDEV_STATE_RELEASED;
    // }
    // data->point.x=x;
    // data->point.y=y;
    return;
}

//lvgl port display init
void lvgl_port_touch_init()
{
    lv_indev_t*indev_touchpad=lv_indev_create();
    lv_indev_set_type(indev_touchpad,LV_INDEV_TYPE_POINTER);
    lv_indev_set_read_cb(indev_touchpad,read);
    return;
}

#endif//#ifdef LVGL_PORT_TOUCH_H
