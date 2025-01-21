#include"lvgl_port.h"
//enable lvgl port
#ifdef LVGL_PORT_H

//config
#define HOR 160
#define VER 80

//device flash
static void flash(lv_display_t*display,const lv_area_t*area,uint8_t*color);
//lvgl port init
void lvgl_port_init();

//device flash
static void flash(lv_display_t*display,const lv_area_t*area,uint8_t*color)
{
    screen_flash(area->x1,area->y1,area->x2,area->y2,(uint16_t*)color);
    lv_display_flush_ready(display);
}

//lvgl port init
void lvgl_port_init()
{
    lv_display_t*display=lv_display_create(HOR,VER);
    lv_display_set_flush_cb(display,flash);
    uint8_t*buffer_1=malloc(HOR*VER/4*sizeof(uint16_t));
    uint8_t*buffer_2=malloc(HOR*VER/4*sizeof(uint16_t));
    lv_display_set_buffers(display,buffer_1,buffer_2,HOR*VER/4*sizeof(uint16_t),LV_DISPLAY_RENDER_MODE_PARTIAL);
}

#endif//#ifdef LVGL_PORT_H
