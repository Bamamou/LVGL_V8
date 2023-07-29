#ifndef QM_UI_ENTRY_H
#define QM_UI_ENTRY_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>

#include "lvgl/lvgl.h"
#include "qmsd_lang.h"
#include "qmsd_gui.h"
LV_FONT_DECLARE(ali_font_16);
LV_FONT_DECLARE(ali_font_32);
LV_FONT_DECLARE(ali_font_18);
LV_FONT_DECLARE(ali_font_40);
LV_FONT_DECLARE(ali_font_42);
LV_FONT_DECLARE(ali_font_15);

LV_IMG_DECLARE(imgtop_bottom_image_png);
LV_IMG_DECLARE(imgdirection_sign_png);
LV_IMG_DECLARE(imgmap_mask_png);
LV_IMG_DECLARE(imgmap_png);
LV_IMG_DECLARE(imgsafety_belt_off_png);
LV_IMG_DECLARE(imgABS_off_png);
LV_IMG_DECLARE(imgturn_right_off_png);
LV_IMG_DECLARE(imgturn_left_off_png);
LV_IMG_DECLARE(imgalternator_off_png);
LV_IMG_DECLARE(imggear_P_png);
LV_IMG_DECLARE(imggear_S_png);
LV_IMG_DECLARE(imggear_N_png);
LV_IMG_DECLARE(imggear_D_png);
LV_IMG_DECLARE(imglight_off_png);
LV_IMG_DECLARE(imgmeter_right_bottom_png);
LV_IMG_DECLARE(imgmeter_left_png);
LV_IMG_DECLARE(imgright_first_gear_png);
LV_IMG_DECLARE(imgright_second_gear_png);
LV_IMG_DECLARE(imgright_third_gear_png);
LV_IMG_DECLARE(imgleft_third_gear_png);
LV_IMG_DECLARE(imgleft_second_gear_png);
LV_IMG_DECLARE(imgleft_first_gear_png);
LV_IMG_DECLARE(imgmeter_left_bottom_png);
LV_IMG_DECLARE(imgbottom_bottom_image_png);
LV_IMG_DECLARE(imgtank_off_png);
LV_IMG_DECLARE(imgmeter_right_png);
LV_IMG_DECLARE(imgalternator_on_png);
LV_IMG_DECLARE(imgright_zero_gear_png);
LV_IMG_DECLARE(imgleft_zero_gear_png);
LV_IMG_DECLARE(imgsun_png);
LV_IMG_DECLARE(imgbbb_png);
LV_IMG_DECLARE(imggear_bottom_png);
LV_IMG_DECLARE(imgaaa_png);
LV_IMG_DECLARE(imgturn_right_on_png);
LV_IMG_DECLARE(imgturn_left_on_png);
LV_IMG_DECLARE(imgwater_off_png);
LV_IMG_DECLARE(imgsafety_belt_on_png);
LV_IMG_DECLARE(imgABS_on_png);
LV_IMG_DECLARE(imglight_on_png);
LV_IMG_DECLARE(imgright_meter_2_png);
LV_IMG_DECLARE(imgright_front_png);
LV_IMG_DECLARE(imgleft_front_png);
LV_IMG_DECLARE(imggo_straight_png);
LV_IMG_DECLARE(imgleft_turn_png);
LV_IMG_DECLARE(imgright_turn_png);
LV_IMG_DECLARE(imgleft_turn_round_png);
LV_IMG_DECLARE(imgright_turn_round_png);
LV_IMG_DECLARE(imgleft_gear_all_png);
LV_IMG_DECLARE(imgright_gear_all_png);

/*
* declear screen_main
*/
extern lv_obj_t * screen_main;
extern lv_obj_t * ima_top_bottom;
extern lv_obj_t * ima_gear;
extern lv_obj_t * ima_alternator;
extern lv_obj_t * ima_light;
extern lv_obj_t * ima_turn_left;
extern lv_obj_t * ima_turn_right;
extern lv_obj_t * ima_ABS;
extern lv_obj_t * ima_belt;
extern lv_obj_t * ima_map;
extern lv_obj_t * ima_map_mask;
extern lv_obj_t * lab_distance;
extern lv_obj_t * lab_dis_com;
extern lv_obj_t * lab_load_show;
extern lv_obj_t * ima_dire_sign;
extern lv_obj_t * ima_bot_bottom;
extern lv_obj_t * ima_met_le_bot;
extern lv_obj_t * ima_met_le_all;
extern lv_obj_t * arc_left;
extern lv_obj_t * ima_cooling;
extern lv_obj_t * ima_gear_left;
extern lv_obj_t * ima_meter_le;
extern lv_obj_t * ima_met_ri_bot;
extern lv_obj_t * ima_met_ri_all;
extern lv_obj_t * arc_right;
extern lv_obj_t * ima_tank;
extern lv_obj_t * ima_gear_right;
extern lv_obj_t * ima_meter_ri;
extern lv_obj_t * lab_time;
extern lv_obj_t * lab_time_sign;
extern lv_obj_t * lab_scr;
extern lv_obj_t * lab_temperature;
extern lv_obj_t * lab_tem_com;
extern lv_obj_t * lab_met_le_date;
extern lv_obj_t * lab_met_le_com;
extern lv_obj_t * lab_met_ri_date;
extern lv_obj_t * lab_met_ri_com;
extern lv_obj_t * ima_weather;
extern lv_obj_t * lab_month;
extern lv_obj_t * lab_date_sign;
extern lv_obj_t * lab_day;
extern lv_obj_t * ima_direction;
extern lv_obj_t * lab_gear;
extern lv_obj_t * lab_3ebe;
void screen_main_build(void);
void screen_main_show(void);
void screen_main_delete(void);

extern lv_obj_t * g_kb;

void qmsd_ui_entry(void);
void qmsd_ui_loop(void);
lv_img_src_t *qmsd_get_img(const char *w_name);
lv_font_t *qmsd_get_font(const char *w_name);

void g_create_kb_ifneeded(void);
void g_show_kb(void);
#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*QM_UI_ENTRY_H*/