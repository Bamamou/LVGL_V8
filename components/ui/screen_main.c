#include "qmsd_ui_entry.h"
#include "qmsd_internal_ui_cb.h"

lv_obj_t* screen_main;
lv_obj_t* ima_top_bottom;
lv_obj_t* ima_gear;
lv_obj_t* ima_alternator;
lv_obj_t* ima_light;
lv_obj_t* ima_turn_left;
lv_obj_t* ima_turn_right;
lv_obj_t* ima_ABS;
lv_obj_t* ima_belt;
lv_obj_t* ima_map;
lv_obj_t* ima_map_mask;
lv_obj_t* lab_distance;
lv_obj_t* lab_dis_com;
lv_obj_t* lab_load_show;
lv_obj_t* ima_dire_sign;
lv_obj_t* ima_bot_bottom;
lv_obj_t* ima_met_le_bot;
lv_obj_t* ima_met_le_all;
lv_obj_t* arc_left;
lv_obj_t* ima_cooling;
lv_obj_t* ima_gear_left;
lv_obj_t* ima_meter_le;
lv_obj_t* ima_met_ri_bot;
lv_obj_t* ima_met_ri_all;
lv_obj_t* arc_right;
lv_obj_t* ima_tank;
lv_obj_t* ima_gear_right;
lv_obj_t* ima_meter_ri;
lv_obj_t* lab_time;
lv_obj_t* lab_time_sign;
lv_obj_t* lab_scr;
lv_obj_t* lab_temperature;
lv_obj_t* lab_tem_com;
lv_obj_t* lab_met_le_date;
lv_obj_t* lab_met_le_com;
lv_obj_t* lab_met_ri_date;
lv_obj_t* lab_met_ri_com;
lv_obj_t* ima_weather;
lv_obj_t* lab_month;
lv_obj_t* lab_date_sign;
lv_obj_t* lab_day;
lv_obj_t* ima_direction;
lv_obj_t* lab_gear;
lv_obj_t* lab_3ebe;


    
void qmsd_ima_top_bottom_create()
{
    ima_top_bottom = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_top_bottom, &imgtop_bottom_image_png);
#ifdef BLOCKLY_ima_top_bottom_EVENT_HANDLER
    lv_obj_set_event_cb(ima_top_bottom, __qmsd_ima_top_bottom_cb);
#endif
    lv_obj_set_pos(ima_top_bottom, 0, -2);
    qmsd_obj_set_id(ima_top_bottom,"ima_top_bottom");
}
    
void qmsd_ima_gear_create()
{
    ima_gear = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_gear, &imggear_D_png);
#ifdef BLOCKLY_ima_gear_EVENT_HANDLER
    lv_obj_set_event_cb(ima_gear, __qmsd_ima_gear_cb);
#endif
    lv_obj_set_pos(ima_gear, -386, 31);
    qmsd_obj_set_id(ima_gear,"ima_gear");
}
    
void qmsd_ima_alternator_create()
{
    ima_alternator = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_alternator, &imgalternator_off_png);
#ifdef BLOCKLY_ima_alternator_EVENT_HANDLER
    lv_obj_set_event_cb(ima_alternator, __qmsd_ima_alternator_cb);
#endif
    lv_obj_set_pos(ima_alternator, 131, 42);
    qmsd_obj_set_id(ima_alternator,"ima_alternator");
}
    
void qmsd_ima_light_create()
{
    ima_light = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_light, &imglight_off_png);
#ifdef BLOCKLY_ima_light_EVENT_HANDLER
    lv_obj_set_event_cb(ima_light, __qmsd_ima_light_cb);
#endif
    lv_obj_set_pos(ima_light, 179, 44);
    qmsd_obj_set_id(ima_light,"ima_light");
}
    
void qmsd_ima_turn_left_create()
{
    ima_turn_left = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_turn_left, &imgturn_left_off_png);
#ifdef BLOCKLY_ima_turn_left_EVENT_HANDLER
    lv_obj_set_event_cb(ima_turn_left, __qmsd_ima_turn_left_cb);
#endif
    lv_obj_set_pos(ima_turn_left, 299, 41);
    qmsd_obj_set_id(ima_turn_left,"ima_turn_left");
}
    
void qmsd_ima_turn_right_create()
{
    ima_turn_right = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_turn_right, &imgturn_right_off_png);
#ifdef BLOCKLY_ima_turn_right_EVENT_HANDLER
    lv_obj_set_event_cb(ima_turn_right, __qmsd_ima_turn_right_cb);
#endif
    lv_obj_set_pos(ima_turn_right, 462, 42);
    qmsd_obj_set_id(ima_turn_right,"ima_turn_right");
}
    
void qmsd_ima_ABS_create()
{
    ima_ABS = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_ABS, &imgABS_off_png);
#ifdef BLOCKLY_ima_ABS_EVENT_HANDLER
    lv_obj_set_event_cb(ima_ABS, __qmsd_ima_ABS_cb);
#endif
    lv_obj_set_pos(ima_ABS, 593, 51);
    qmsd_obj_set_id(ima_ABS,"ima_ABS");
}
    
void qmsd_ima_belt_create()
{
    ima_belt = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_belt, &imgsafety_belt_off_png);
#ifdef BLOCKLY_ima_belt_EVENT_HANDLER
    lv_obj_set_event_cb(ima_belt, __qmsd_ima_belt_cb);
#endif
    lv_obj_set_pos(ima_belt, 639, 51);
    qmsd_obj_set_id(ima_belt,"ima_belt");
}
    
void qmsd_ima_map_create()
{
    ima_map = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_map, &imgmap_png);
#ifdef BLOCKLY_ima_map_EVENT_HANDLER
    lv_obj_set_event_cb(ima_map, __qmsd_ima_map_cb);
#endif
    lv_obj_set_pos(ima_map, 203, 126);
    qmsd_obj_set_id(ima_map,"ima_map");
}
    
void qmsd_ima_map_mask_create()
{
    ima_map_mask = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_map_mask, &imgmap_mask_png);
#ifdef BLOCKLY_ima_map_mask_EVENT_HANDLER
    lv_obj_set_event_cb(ima_map_mask, __qmsd_ima_map_mask_cb);
#endif
    lv_obj_set_pos(ima_map_mask, 258, 130);
    qmsd_obj_set_id(ima_map_mask,"ima_map_mask");
}
    void qmsd_lab_distance_create()
{
	lab_distance = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_distance,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_distance,true);
	lv_obj_set_size(lab_distance, 49, 26);
//set label style
	lv_obj_set_style_local_text_color(lab_distance,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_distance, "138");
	lv_label_set_align(lab_distance, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_distance,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_32);
#ifdef BLOCKLY_lab_distance_EVENT_HANDLER
	lv_obj_set_event_cb(lab_distance, __qmsd_lab_distance_cb);
#endif
	if(lab_distance->coords.x2-lab_distance->coords.x1<49)
	{
		int x_offset=(49-(lab_distance->coords.x2-lab_distance->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_distance,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_distance,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_distance->coords.y2-lab_distance->coords.y1<26)
	{
		int y_offset=(26-(lab_distance->coords.y2-lab_distance->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_distance,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_distance,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_distance, 389, 151);
    qmsd_obj_set_id(lab_distance,"lab_distance");
}
    void qmsd_lab_dis_com_create()
{
	lab_dis_com = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_dis_com,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_dis_com,true);
	lv_obj_set_size(lab_dis_com, 13, 14);
//set label style
	lv_obj_set_style_local_text_color(lab_dis_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_dis_com, "M");
	lv_label_set_align(lab_dis_com, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_dis_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_18);
#ifdef BLOCKLY_lab_dis_com_EVENT_HANDLER
	lv_obj_set_event_cb(lab_dis_com, __qmsd_lab_dis_com_cb);
#endif
	if(lab_dis_com->coords.x2-lab_dis_com->coords.x1<13)
	{
		int x_offset=(13-(lab_dis_com->coords.x2-lab_dis_com->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_dis_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_dis_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_dis_com->coords.y2-lab_dis_com->coords.y1<14)
	{
		int y_offset=(14-(lab_dis_com->coords.y2-lab_dis_com->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_dis_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_dis_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_dis_com, 448, 163);
    qmsd_obj_set_id(lab_dis_com,"lab_dis_com");
}
    void qmsd_lab_load_show_create()
{
	lab_load_show = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_load_show,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_load_show,true);
	lv_obj_set_size(lab_load_show, 75, 17);
//set label style
	lv_obj_set_style_local_text_color(lab_load_show,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x96, 0xa0, 0xbc));

	lv_label_set_text(lab_load_show, "南坪快速");
	lv_label_set_align(lab_load_show, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_load_show,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_18);
#ifdef BLOCKLY_lab_load_show_EVENT_HANDLER
	lv_obj_set_event_cb(lab_load_show, __qmsd_lab_load_show_cb);
#endif
	if(lab_load_show->coords.x2-lab_load_show->coords.x1<75)
	{
		int x_offset=(75-(lab_load_show->coords.x2-lab_load_show->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_load_show,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_load_show,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_load_show->coords.y2-lab_load_show->coords.y1<17)
	{
		int y_offset=(17-(lab_load_show->coords.y2-lab_load_show->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_load_show,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_load_show,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_load_show, 391, 183);
    qmsd_obj_set_id(lab_load_show,"lab_load_show");
}
    
void qmsd_ima_dire_sign_create()
{
    ima_dire_sign = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_dire_sign, &imgdirection_sign_png);
#ifdef BLOCKLY_ima_dire_sign_EVENT_HANDLER
    lv_obj_set_event_cb(ima_dire_sign, __qmsd_ima_dire_sign_cb);
#endif
    lv_obj_set_pos(ima_dire_sign, 381, 324);
    qmsd_obj_set_id(ima_dire_sign,"ima_dire_sign");
}
    
void qmsd_ima_bot_bottom_create()
{
    ima_bot_bottom = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_bot_bottom, &imgbottom_bottom_image_png);
#ifdef BLOCKLY_ima_bot_bottom_EVENT_HANDLER
    lv_obj_set_event_cb(ima_bot_bottom, __qmsd_ima_bot_bottom_cb);
#endif
    lv_obj_set_pos(ima_bot_bottom, -2, 375);
    qmsd_obj_set_id(ima_bot_bottom,"ima_bot_bottom");
}
    
void qmsd_ima_met_le_bot_create()
{
    ima_met_le_bot = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_met_le_bot, &imgmeter_left_bottom_png);
#ifdef BLOCKLY_ima_met_le_bot_EVENT_HANDLER
    lv_obj_set_event_cb(ima_met_le_bot, __qmsd_ima_met_le_bot_cb);
#endif
    lv_obj_set_pos(ima_met_le_bot, 17, 113);
    qmsd_obj_set_id(ima_met_le_bot,"ima_met_le_bot");
}
    
void qmsd_ima_met_le_all_create()
{
    ima_met_le_all = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_met_le_all, &imgleft_gear_all_png);
#ifdef BLOCKLY_ima_met_le_all_EVENT_HANDLER
    lv_obj_set_event_cb(ima_met_le_all, __qmsd_ima_met_le_all_cb);
#endif
    lv_obj_set_pos(ima_met_le_all, 40, 123);
    qmsd_obj_set_id(ima_met_le_all,"ima_met_le_all");
}
    void qmsd_arc_left_create()
{
    arc_left = lv_arc_create(screen_main, NULL);
    lv_obj_set_size(arc_left, 272, 272);
    lv_obj_set_pos(arc_left, 39, 120);
    //set indic style
    lv_obj_set_style_local_line_color(arc_left,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x10, 0x13, 0x17));
    lv_obj_set_style_local_line_width(arc_left,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,66);
    //set main part style
    lv_obj_set_style_local_line_color(arc_left,LV_ARC_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xD4, 0xD7, 0xD9));
    lv_obj_set_style_local_line_width(arc_left,LV_ARC_PART_BG,LV_STATE_DEFAULT,66);
    lv_obj_set_style_local_bg_color(arc_left,LV_ARC_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xFF, 0xFF, 0xFF));
    lv_obj_set_style_local_pad_all(arc_left,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_bg_opa(arc_left,LV_ARC_PART_BG,LV_STATE_DEFAULT,255);

    lv_arc_set_bg_angles(arc_left, 125, 485);
    lv_arc_set_angles(arc_left, 125, 485);
#ifdef BLOCKLY_arc_left_EVENT_HANDLER
    lv_obj_set_event_cb(arc_left, __qmsd_arc_left_cb);
#endif
    qmsd_obj_set_id(arc_left,"arc_left");
}
    
void qmsd_ima_cooling_create()
{
    ima_cooling = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_cooling, &imgwater_off_png);
#ifdef BLOCKLY_ima_cooling_EVENT_HANDLER
    lv_obj_set_event_cb(ima_cooling, __qmsd_ima_cooling_cb);
#endif
    lv_obj_set_pos(ima_cooling, 39, 350);
    qmsd_obj_set_id(ima_cooling,"ima_cooling");
}
    
void qmsd_ima_gear_left_create()
{
    ima_gear_left = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_gear_left, &imgleft_second_gear_png);
#ifdef BLOCKLY_ima_gear_left_EVENT_HANDLER
    lv_obj_set_event_cb(ima_gear_left, __qmsd_ima_gear_left_cb);
#endif
    lv_obj_set_pos(ima_gear_left, 51, 365);
    qmsd_obj_set_id(ima_gear_left,"ima_gear_left");
}
    
void qmsd_ima_meter_le_create()
{
    ima_meter_le = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_meter_le, &imgmeter_left_png);
#ifdef BLOCKLY_ima_meter_le_EVENT_HANDLER
    lv_obj_set_event_cb(ima_meter_le, __qmsd_ima_meter_le_cb);
#endif
    lv_obj_set_pos(ima_meter_le, 54, 144);
    qmsd_obj_set_id(ima_meter_le,"ima_meter_le");
}
    
void qmsd_ima_met_ri_bot_create()
{
    ima_met_ri_bot = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_met_ri_bot, &imgmeter_right_bottom_png);
#ifdef BLOCKLY_ima_met_ri_bot_EVENT_HANDLER
    lv_obj_set_event_cb(ima_met_ri_bot, __qmsd_ima_met_ri_bot_cb);
#endif
    lv_obj_set_pos(ima_met_ri_bot, 479, 112);
    qmsd_obj_set_id(ima_met_ri_bot,"ima_met_ri_bot");
}
    
void qmsd_ima_met_ri_all_create()
{
    ima_met_ri_all = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_met_ri_all, &imgright_gear_all_png);
#ifdef BLOCKLY_ima_met_ri_all_EVENT_HANDLER
    lv_obj_set_event_cb(ima_met_ri_all, __qmsd_ima_met_ri_all_cb);
#endif
    lv_obj_set_pos(ima_met_ri_all, 492, 123);
    qmsd_obj_set_id(ima_met_ri_all,"ima_met_ri_all");
}
    void qmsd_arc_right_create()
{
    arc_right = lv_arc_create(screen_main, NULL);
    lv_obj_set_size(arc_right, 274, 274);
    lv_obj_set_pos(arc_right, 490, 118);
    //set indic style
    lv_obj_set_style_local_line_color(arc_right,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x10, 0x13, 0x17));
    lv_obj_set_style_local_line_width(arc_right,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,66);
    //set main part style
    lv_obj_set_style_local_line_color(arc_right,LV_ARC_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xD4, 0xD7, 0xD9));
    lv_obj_set_style_local_line_width(arc_right,LV_ARC_PART_BG,LV_STATE_DEFAULT,66);
    lv_obj_set_style_local_bg_color(arc_right,LV_ARC_PART_BG,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xFF, 0xFF, 0xFF));
    lv_obj_set_style_local_pad_all(arc_right,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
    lv_obj_set_style_local_bg_opa(arc_right,LV_ARC_PART_BG,LV_STATE_DEFAULT,255);

    lv_arc_set_bg_angles(arc_right, 127, 486);
    lv_arc_set_angles(arc_right, 127, 486);
#ifdef BLOCKLY_arc_right_EVENT_HANDLER
    lv_obj_set_event_cb(arc_right, __qmsd_arc_right_cb);
#endif
    qmsd_obj_set_id(arc_right,"arc_right");
}
    
void qmsd_ima_tank_create()
{
    ima_tank = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_tank, &imgtank_off_png);
#ifdef BLOCKLY_ima_tank_EVENT_HANDLER
    lv_obj_set_event_cb(ima_tank, __qmsd_ima_tank_cb);
#endif
    lv_obj_set_pos(ima_tank, 741, 352);
    qmsd_obj_set_id(ima_tank,"ima_tank");
}
    
void qmsd_ima_gear_right_create()
{
    ima_gear_right = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_gear_right, &imgright_second_gear_png);
#ifdef BLOCKLY_ima_gear_right_EVENT_HANDLER
    lv_obj_set_event_cb(ima_gear_right, __qmsd_ima_gear_right_cb);
#endif
    lv_obj_set_pos(ima_gear_right, 648, 365);
    qmsd_obj_set_id(ima_gear_right,"ima_gear_right");
}
    
void qmsd_ima_meter_ri_create()
{
    ima_meter_ri = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_meter_ri, &imgright_meter_2_png);
#ifdef BLOCKLY_ima_meter_ri_EVENT_HANDLER
    lv_obj_set_event_cb(ima_meter_ri, __qmsd_ima_meter_ri_cb);
#endif
    lv_obj_set_pos(ima_meter_ri, 508, 136);
    qmsd_obj_set_id(ima_meter_ri,"ima_meter_ri");
}
    void qmsd_lab_time_create()
{
	lab_time = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_time,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_time,true);
	lv_obj_set_size(lab_time, 100, 30);
//set label style
	lv_obj_set_style_local_text_color(lab_time,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_time, "15");
	lv_label_set_align(lab_time, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_time,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_40);
#ifdef BLOCKLY_lab_time_EVENT_HANDLER
	lv_obj_set_event_cb(lab_time, __qmsd_lab_time_cb);
#endif
	if(lab_time->coords.x2-lab_time->coords.x1<100)
	{
		int x_offset=(100-(lab_time->coords.x2-lab_time->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_time,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_time,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_time->coords.y2-lab_time->coords.y1<30)
	{
		int y_offset=(30-(lab_time->coords.y2-lab_time->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_time,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_time,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_time, 334, 404);
    qmsd_obj_set_id(lab_time,"lab_time");
}
    void qmsd_lab_time_sign_create()
{
	lab_time_sign = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_time_sign,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_time_sign,true);
	lv_obj_set_size(lab_time_sign, 131, 30);
//set label style
	lv_obj_set_style_local_text_color(lab_time_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_time_sign, ":");
	lv_label_set_align(lab_time_sign, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_time_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_40);
#ifdef BLOCKLY_lab_time_sign_EVENT_HANDLER
	lv_obj_set_event_cb(lab_time_sign, __qmsd_lab_time_sign_cb);
#endif
	if(lab_time_sign->coords.x2-lab_time_sign->coords.x1<131)
	{
		int x_offset=(131-(lab_time_sign->coords.x2-lab_time_sign->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_time_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_time_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_time_sign->coords.y2-lab_time_sign->coords.y1<30)
	{
		int y_offset=(30-(lab_time_sign->coords.y2-lab_time_sign->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_time_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_time_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_time_sign, 344, 404);
    qmsd_obj_set_id(lab_time_sign,"lab_time_sign");
}
    void qmsd_lab_scr_create()
{
	lab_scr = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_scr,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_scr,true);
	lv_obj_set_size(lab_scr, 131, 30);
//set label style
	lv_obj_set_style_local_text_color(lab_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_scr, "20");
	lv_label_set_align(lab_scr, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_40);
#ifdef BLOCKLY_lab_scr_EVENT_HANDLER
	lv_obj_set_event_cb(lab_scr, __qmsd_lab_scr_cb);
#endif
	if(lab_scr->coords.x2-lab_scr->coords.x1<131)
	{
		int x_offset=(131-(lab_scr->coords.x2-lab_scr->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_scr->coords.y2-lab_scr->coords.y1<30)
	{
		int y_offset=(30-(lab_scr->coords.y2-lab_scr->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_scr,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_scr, 371, 404);
    qmsd_obj_set_id(lab_scr,"lab_scr");
}
    void qmsd_lab_temperature_create()
{
	lab_temperature = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_temperature,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_temperature,true);
	lv_obj_set_size(lab_temperature, 28, 14);
//set label style
	lv_obj_set_style_local_text_color(lab_temperature,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_temperature, "20");
	lv_label_set_align(lab_temperature, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_temperature,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_18);
#ifdef BLOCKLY_lab_temperature_EVENT_HANDLER
	lv_obj_set_event_cb(lab_temperature, __qmsd_lab_temperature_cb);
#endif
	if(lab_temperature->coords.x2-lab_temperature->coords.x1<28)
	{
		int x_offset=(28-(lab_temperature->coords.x2-lab_temperature->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_temperature,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_temperature,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_temperature->coords.y2-lab_temperature->coords.y1<14)
	{
		int y_offset=(14-(lab_temperature->coords.y2-lab_temperature->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_temperature,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_temperature,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_temperature, 453, 447);
    qmsd_obj_set_id(lab_temperature,"lab_temperature");
}
    void qmsd_lab_tem_com_create()
{
	lab_tem_com = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_tem_com,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_tem_com,true);
	lv_obj_set_size(lab_tem_com, 20, 11);
//set label style
	lv_obj_set_style_local_text_color(lab_tem_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_tem_com, "℃");
	lv_label_set_align(lab_tem_com, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_tem_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);
#ifdef BLOCKLY_lab_tem_com_EVENT_HANDLER
	lv_obj_set_event_cb(lab_tem_com, __qmsd_lab_tem_com_cb);
#endif
	if(lab_tem_com->coords.x2-lab_tem_com->coords.x1<20)
	{
		int x_offset=(20-(lab_tem_com->coords.x2-lab_tem_com->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_tem_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_tem_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_tem_com->coords.y2-lab_tem_com->coords.y1<11)
	{
		int y_offset=(11-(lab_tem_com->coords.y2-lab_tem_com->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_tem_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_tem_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_tem_com, 475, 448);
    qmsd_obj_set_id(lab_tem_com,"lab_tem_com");
}
    void qmsd_lab_met_le_date_create()
{
	lab_met_le_date = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_met_le_date,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_met_le_date,true);
	lv_obj_set_size(lab_met_le_date, 60, 29);
//set label style
	lv_obj_set_style_local_text_color(lab_met_le_date,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_met_le_date, "86");
	lv_label_set_align(lab_met_le_date, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_met_le_date,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_40);
#ifdef BLOCKLY_lab_met_le_date_EVENT_HANDLER
	lv_obj_set_event_cb(lab_met_le_date, __qmsd_lab_met_le_date_cb);
#endif
	if(lab_met_le_date->coords.x2-lab_met_le_date->coords.x1<60)
	{
		int x_offset=(60-(lab_met_le_date->coords.x2-lab_met_le_date->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_met_le_date,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_met_le_date,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_met_le_date->coords.y2-lab_met_le_date->coords.y1<29)
	{
		int y_offset=(29-(lab_met_le_date->coords.y2-lab_met_le_date->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_met_le_date,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_met_le_date,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_met_le_date, 145, 237);
    qmsd_obj_set_id(lab_met_le_date,"lab_met_le_date");
}
    void qmsd_lab_met_le_com_create()
{
	lab_met_le_com = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_met_le_com,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_met_le_com,true);
	lv_obj_set_size(lab_met_le_com, 52, 12);
//set label style
	lv_obj_set_style_local_text_color(lab_met_le_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_met_le_com, "KM/H");
	lv_label_set_align(lab_met_le_com, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_met_le_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_15);
#ifdef BLOCKLY_lab_met_le_com_EVENT_HANDLER
	lv_obj_set_event_cb(lab_met_le_com, __qmsd_lab_met_le_com_cb);
#endif
	if(lab_met_le_com->coords.x2-lab_met_le_com->coords.x1<52)
	{
		int x_offset=(52-(lab_met_le_com->coords.x2-lab_met_le_com->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_met_le_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_met_le_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_met_le_com->coords.y2-lab_met_le_com->coords.y1<12)
	{
		int y_offset=(12-(lab_met_le_com->coords.y2-lab_met_le_com->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_met_le_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_met_le_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_met_le_com, 149, 279);
    qmsd_obj_set_id(lab_met_le_com,"lab_met_le_com");
}
    void qmsd_lab_met_ri_date_create()
{
	lab_met_ri_date = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_met_ri_date,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_met_ri_date,true);
	lv_obj_set_size(lab_met_ri_date, 46, 29);
//set label style
	lv_obj_set_style_local_text_color(lab_met_ri_date,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_met_ri_date, "1.2");
	lv_label_set_align(lab_met_ri_date, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_met_ri_date,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_40);
#ifdef BLOCKLY_lab_met_ri_date_EVENT_HANDLER
	lv_obj_set_event_cb(lab_met_ri_date, __qmsd_lab_met_ri_date_cb);
#endif
	if(lab_met_ri_date->coords.x2-lab_met_ri_date->coords.x1<46)
	{
		int x_offset=(46-(lab_met_ri_date->coords.x2-lab_met_ri_date->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_met_ri_date,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_met_ri_date,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_met_ri_date->coords.y2-lab_met_ri_date->coords.y1<29)
	{
		int y_offset=(29-(lab_met_ri_date->coords.y2-lab_met_ri_date->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_met_ri_date,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_met_ri_date,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_met_ri_date, 600, 237);
    qmsd_obj_set_id(lab_met_ri_date,"lab_met_ri_date");
}
    void qmsd_lab_met_ri_com_create()
{
	lab_met_ri_com = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_met_ri_com,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_met_ri_com,true);
	lv_obj_set_size(lab_met_ri_com, 82, 12);
//set label style
	lv_obj_set_style_local_text_color(lab_met_ri_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_met_ri_com, "1min×1000");
	lv_label_set_align(lab_met_ri_com, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_met_ri_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_15);
#ifdef BLOCKLY_lab_met_ri_com_EVENT_HANDLER
	lv_obj_set_event_cb(lab_met_ri_com, __qmsd_lab_met_ri_com_cb);
#endif
	if(lab_met_ri_com->coords.x2-lab_met_ri_com->coords.x1<82)
	{
		int x_offset=(82-(lab_met_ri_com->coords.x2-lab_met_ri_com->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_met_ri_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_met_ri_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_met_ri_com->coords.y2-lab_met_ri_com->coords.y1<12)
	{
		int y_offset=(12-(lab_met_ri_com->coords.y2-lab_met_ri_com->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_met_ri_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_met_ri_com,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_met_ri_com, 589, 279);
    qmsd_obj_set_id(lab_met_ri_com,"lab_met_ri_com");
}
    
void qmsd_ima_weather_create()
{
    ima_weather = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_weather, &imgsun_png);
#ifdef BLOCKLY_ima_weather_EVENT_HANDLER
    lv_obj_set_event_cb(ima_weather, __qmsd_ima_weather_cb);
#endif
    lv_obj_set_pos(ima_weather, 392, 440);
    qmsd_obj_set_id(ima_weather,"ima_weather");
}
    void qmsd_lab_month_create()
{
	lab_month = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_month,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_month,true);
	lv_obj_set_size(lab_month, 47, 14);
//set label style
	lv_obj_set_style_local_text_color(lab_month,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_month, "10");
	lv_label_set_align(lab_month, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_month,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_18);
#ifdef BLOCKLY_lab_month_EVENT_HANDLER
	lv_obj_set_event_cb(lab_month, __qmsd_lab_month_cb);
#endif
	if(lab_month->coords.x2-lab_month->coords.x1<47)
	{
		int x_offset=(47-(lab_month->coords.x2-lab_month->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_month,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_month,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_month->coords.y2-lab_month->coords.y1<14)
	{
		int y_offset=(14-(lab_month->coords.y2-lab_month->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_month,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_month,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_month, 302, 447);
    qmsd_obj_set_id(lab_month,"lab_month");
}
    void qmsd_lab_date_sign_create()
{
	lab_date_sign = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_date_sign,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_date_sign,true);
	lv_obj_set_size(lab_date_sign, 47, 14);
//set label style
	lv_obj_set_style_local_text_color(lab_date_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_date_sign, ".");
	lv_label_set_align(lab_date_sign, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_date_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_18);
#ifdef BLOCKLY_lab_date_sign_EVENT_HANDLER
	lv_obj_set_event_cb(lab_date_sign, __qmsd_lab_date_sign_cb);
#endif
	if(lab_date_sign->coords.x2-lab_date_sign->coords.x1<47)
	{
		int x_offset=(47-(lab_date_sign->coords.x2-lab_date_sign->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_date_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_date_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_date_sign->coords.y2-lab_date_sign->coords.y1<14)
	{
		int y_offset=(14-(lab_date_sign->coords.y2-lab_date_sign->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_date_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_date_sign,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_date_sign, 316, 447);
    qmsd_obj_set_id(lab_date_sign,"lab_date_sign");
}
    void qmsd_lab_day_create()
{
	lab_day = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_day,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_day,true);
	lv_obj_set_size(lab_day, 47, 14);
//set label style
	lv_obj_set_style_local_text_color(lab_day,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_day, "31");
	lv_label_set_align(lab_day, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_day,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_18);
#ifdef BLOCKLY_lab_day_EVENT_HANDLER
	lv_obj_set_event_cb(lab_day, __qmsd_lab_day_cb);
#endif
	if(lab_day->coords.x2-lab_day->coords.x1<47)
	{
		int x_offset=(47-(lab_day->coords.x2-lab_day->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_day,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_day,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_day->coords.y2-lab_day->coords.y1<14)
	{
		int y_offset=(14-(lab_day->coords.y2-lab_day->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_day,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_day,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_day, 330, 447);
    qmsd_obj_set_id(lab_day,"lab_day");
}
    
void qmsd_ima_direction_create()
{
    ima_direction = lv_img_create(screen_main, NULL);
    lv_img_set_src(ima_direction, &imgright_front_png);
#ifdef BLOCKLY_ima_direction_EVENT_HANDLER
    lv_obj_set_event_cb(ima_direction, __qmsd_ima_direction_cb);
#endif
    lv_obj_set_pos(ima_direction, 350, 151);
    qmsd_obj_set_id(ima_direction,"ima_direction");
}
    void qmsd_lab_gear_create()
{
	lab_gear = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_gear,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_gear,true);
	lv_obj_set_size(lab_gear, 100, 33);
//set label style
	lv_obj_set_style_local_text_color(lab_gear,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x7e, 0xd3, 0x21));

	lv_label_set_text(lab_gear, "Ready");
	lv_label_set_align(lab_gear, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_gear,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_32);
#ifdef BLOCKLY_lab_gear_EVENT_HANDLER
	lv_obj_set_event_cb(lab_gear, __qmsd_lab_gear_cb);
#endif
	if(lab_gear->coords.x2-lab_gear->coords.x1<100)
	{
		int x_offset=(100-(lab_gear->coords.x2-lab_gear->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_gear,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_gear,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_gear->coords.y2-lab_gear->coords.y1<33)
	{
		int y_offset=(33-(lab_gear->coords.y2-lab_gear->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_gear,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_gear,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_gear, 345, 32);
    qmsd_obj_set_id(lab_gear,"lab_gear");
}
    void qmsd_lab_3ebe_create()
{
	lab_3ebe = lv_label_create(screen_main, NULL);
	lv_label_set_long_mode(lab_3ebe,LV_LABEL_LONG_EXPAND);
	lv_label_set_recolor(lab_3ebe,true);
	lv_obj_set_size(lab_3ebe, 29, 33);
//set label style
	lv_obj_set_style_local_text_color(lab_3ebe,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xff, 0xff, 0xff));

	lv_label_set_text(lab_3ebe, "123456PDSN");
	lv_label_set_align(lab_3ebe, LV_LABEL_ALIGN_CENTER);
	lv_obj_set_style_local_text_font(lab_3ebe,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_42);
#ifdef BLOCKLY_lab_3ebe_EVENT_HANDLER
	lv_obj_set_event_cb(lab_3ebe, __qmsd_lab_3ebe_cb);
#endif
	if(lab_3ebe->coords.x2-lab_3ebe->coords.x1<29)
	{
		int x_offset=(29-(lab_3ebe->coords.x2-lab_3ebe->coords.x1))/2;
		lv_obj_set_style_local_pad_left(lab_3ebe,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(lab_3ebe,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(lab_3ebe->coords.y2-lab_3ebe->coords.y1<33)
	{
		int y_offset=(33-(lab_3ebe->coords.y2-lab_3ebe->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(lab_3ebe,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(lab_3ebe,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
	lv_obj_set_pos(lab_3ebe, -396, 41);
    qmsd_obj_set_id(lab_3ebe,"lab_3ebe");
}

static void screen_main_qmsd_cb(lv_obj_t * obj, lv_event_t event, void *data)
{/*
    char *trans;
    lv_label_set_text(lab_distance,qmsd_lang_get_trans("lab_distance","138"));
    lv_label_set_text(lab_dis_com,qmsd_lang_get_trans("lab_dis_com","M"));
    lv_label_set_text(lab_load_show,qmsd_lang_get_trans("lab_load_show","南坪快速"));
    lv_label_set_text(lab_time,qmsd_lang_get_trans("lab_time","15"));
    lv_label_set_text(lab_time_sign,qmsd_lang_get_trans("lab_time_sign",":"));
    lv_label_set_text(lab_scr,qmsd_lang_get_trans("lab_scr","20"));
    lv_label_set_text(lab_temperature,qmsd_lang_get_trans("lab_temperature","20"));
    lv_label_set_text(lab_tem_com,qmsd_lang_get_trans("lab_tem_com","℃"));
    lv_label_set_text(lab_met_le_date,qmsd_lang_get_trans("lab_met_le_date","86"));
    lv_label_set_text(lab_met_le_com,qmsd_lang_get_trans("lab_met_le_com","KM/H"));
    lv_label_set_text(lab_met_ri_date,qmsd_lang_get_trans("lab_met_ri_date","1.2"));
    lv_label_set_text(lab_met_ri_com,qmsd_lang_get_trans("lab_met_ri_com","1min×1000"));
    lv_label_set_text(lab_month,qmsd_lang_get_trans("lab_month","10"));
    lv_label_set_text(lab_date_sign,qmsd_lang_get_trans("lab_date_sign","."));
    lv_label_set_text(lab_day,qmsd_lang_get_trans("lab_day","31"));
    lv_label_set_text(lab_gear,qmsd_lang_get_trans("lab_gear","Ready"));
    lv_label_set_text(lab_3ebe,qmsd_lang_get_trans("lab_3ebe","123456PDSN"));
*/
#ifdef BLOCKLY_screen_main_SCREEN_INIT
    __qmsd_screen_main_init();
#endif
}

static void screen_main_del_cb(lv_obj_t* obj,lv_event_t event)
{
    if(event == LV_EVENT_DELETE)
    {
        screen_main=NULL;
        qmsd_screen_remove("screen_main");
    }
}

void screen_main_build(void)
{
    if(screen_main) return;
    screen_main = lv_obj_create(NULL, NULL);
    lv_obj_qmsd_set_cb(screen_main, screen_main_qmsd_cb);
    lv_obj_set_style_local_bg_color(screen_main,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,LV_COLOR_MAKE(0x00, 0x00, 0x00));

    qmsd_ima_top_bottom_create();
    qmsd_ima_gear_create();
    qmsd_ima_alternator_create();
    qmsd_ima_light_create();
    qmsd_ima_turn_left_create();
    qmsd_ima_turn_right_create();
    qmsd_ima_ABS_create();
    qmsd_ima_belt_create();
    qmsd_ima_map_create();
    qmsd_ima_map_mask_create();
    qmsd_lab_distance_create();
    qmsd_lab_dis_com_create();
    qmsd_lab_load_show_create();
    qmsd_ima_dire_sign_create();
    qmsd_ima_bot_bottom_create();
    qmsd_ima_met_le_bot_create();
    qmsd_ima_met_le_all_create();
    qmsd_arc_left_create();
    qmsd_ima_cooling_create();
    qmsd_ima_gear_left_create();
    qmsd_ima_meter_le_create();
    qmsd_ima_met_ri_bot_create();
    qmsd_ima_met_ri_all_create();
    qmsd_arc_right_create();
    qmsd_ima_tank_create();
    qmsd_ima_gear_right_create();
    qmsd_ima_meter_ri_create();
    qmsd_lab_time_create();
    qmsd_lab_time_sign_create();
    qmsd_lab_scr_create();
    qmsd_lab_temperature_create();
    qmsd_lab_tem_com_create();
    qmsd_lab_met_le_date_create();
    qmsd_lab_met_le_com_create();
    qmsd_lab_met_ri_date_create();
    qmsd_lab_met_ri_com_create();
    qmsd_ima_weather_create();
    qmsd_lab_month_create();
    qmsd_lab_date_sign_create();
    qmsd_lab_day_create();
    qmsd_ima_direction_create();
    qmsd_lab_gear_create();
    qmsd_lab_3ebe_create();
    lv_obj_set_event_cb(screen_main,screen_main_del_cb);
    qmsd_screen_register(screen_main,"screen_main");
}

void screen_main_show(void)
{
    if(!screen_main)
    {
        screen_main_build();
    }
    lv_scr_load(screen_main);
}

void screen_main_delete(void)
{
    if(screen_main)
    {
        lv_obj_del(screen_main);
        screen_main = NULL;
    }
}
