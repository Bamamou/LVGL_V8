#include "qmsd_ui_entry.h"
//#include "qmsd_lang.h"

int arc_left_sign = -1; int arc_right_sign = -1; lv_anim_t all_anim_obj;  lv_anim_path_t all_anim_obj_path;  
int task_callback_left_light_sign = -1; lv_task_t* task_callback_left_light; 
int task_callback_water_sign = -1; lv_task_t* task_callback_water; 
void lv_anim_ima_sa_ima_function_cb(void* obj,lv_anim_value_t values) {
    lv_arc_set_start_angle(obj, values);

}

int task_callback_tank_sign = -1; lv_task_t* task_callback_tank; 
void callback_left_light(lv_task_t* t) {
  /*left_light task*/
    static int _timer_index=1;
    if(_timer_index<1)
      _timer_index=1;
    if(task_callback_left_light_sign == 1) {
        if(_timer_index == 1) {
            lv_img_set_src(ima_turn_left, &imgturn_left_off_png);
        }else {
            lv_img_set_src(ima_turn_left, &imgturn_left_on_png);
            _timer_index = 0;
        }
    }else if(task_callback_left_light_sign == 2) {
          lv_img_set_src(ima_turn_left, &imgturn_left_off_png);
          lv_task_del(t);
    }
  
    _timer_index++;

}

int task_callback_time_sign = -1; lv_task_t* task_callback_time; 
void callback_water(lv_task_t* t) {
  /*cooling water temperature task*/
    static int _timer_index=1;
    if(_timer_index<1)
    {
      _timer_index=1;
    }
  
      if(task_callback_water_sign == 1) {
          if(_timer_index == 1) {
              lv_img_set_src(ima_gear_left, &imgleft_zero_gear_png);
          }else if(_timer_index == 2){
              lv_img_set_src(ima_gear_left, &imgleft_first_gear_png);
          }else if(_timer_index == 3){
              lv_img_set_src(ima_gear_left, &imgleft_second_gear_png);
          }else if(_timer_index == 4){
              lv_img_set_src(ima_gear_left, &imgleft_third_gear_png);
          }else if(_timer_index == 5){
              lv_img_set_src(ima_gear_left, &imgleft_second_gear_png);
          }else if(_timer_index == 6){
              lv_img_set_src(ima_gear_left, &imgleft_first_gear_png);
              _timer_index = 0;
          }
      }else if(task_callback_water_sign == 2) {
          lv_img_set_src(ima_gear_left, &imgleft_second_gear_png);
          lv_task_del(t);
      }
  
    _timer_index++;

}

int task_callback_direction_sign = -1; lv_task_t* task_callback_direction; 
void callback_tank(lv_task_t* t) {
  /*tank gear task*/
    static int _timer_index=1;
    if(_timer_index<1)
    {
      _timer_index=1;
    }
  
      if(task_callback_tank_sign == 1) {
          if(_timer_index == 1) {
              lv_img_set_src(ima_gear_right, &imgright_zero_gear_png);
          }else if(_timer_index == 2) {
              lv_img_set_src(ima_gear_right, &imgright_first_gear_png);
          }else if(_timer_index == 3) {
              lv_img_set_src(ima_gear_right, &imgright_second_gear_png);
          }else if(_timer_index == 4) {
              lv_img_set_src(ima_gear_right, &imgright_third_gear_png);
          }else if(_timer_index == 5) {
              lv_img_set_src(ima_gear_right, &imgright_second_gear_png);
          }else if(_timer_index == 6) {
              lv_img_set_src(ima_gear_right, &imgright_first_gear_png);
              _timer_index = 0;
          }
      }else if(task_callback_tank_sign == 2) {
          lv_img_set_src(ima_gear_right, &imgright_second_gear_png);
          lv_task_del(t);
      }
  
    _timer_index++;

}

void callback_time(lv_task_t* t) {
  /*time task*/
    static int _timer_index=1;
    if(_timer_index<1)
    {
      _timer_index=1;
    }
  
      if(task_callback_time_sign == 1) {
          if(_timer_index == 1) {
              lv_label_set_text(lab_time_sign, ":");
          }else {
              lv_label_set_text(lab_time_sign, "");
              _timer_index = 0;
          }
      }else if(task_callback_time_sign == 2) {
          lv_label_set_text(lab_time_sign, ":");
          lv_task_del(t);
      }
  
    _timer_index++;

}

void lv_anim_ima_sa_ima_function(lv_obj_t* obj, bool arc_control, uint32_t anim_time) {
    lv_anim_path_init(&all_anim_obj_path);
    lv_anim_path_set_cb(&all_anim_obj_path, lv_anim_path_ease_in_out);
    lv_anim_set_path(&all_anim_obj, &all_anim_obj_path);
    lv_anim_init(&all_anim_obj);
    lv_anim_set_values(&all_anim_obj, 408, 127);
    lv_anim_set_time(&all_anim_obj, anim_time);
    lv_anim_set_playback_delay(&all_anim_obj, 100);
    lv_anim_set_playback_time(&all_anim_obj, anim_time);
    lv_anim_set_repeat_delay(&all_anim_obj, 100);
    lv_anim_set_repeat_count(&all_anim_obj, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_exec_cb(&all_anim_obj, (lv_anim_exec_xcb_t)lv_anim_ima_sa_ima_function_cb);
  
      if(obj == arc_left) {
          if(arc_control && (arc_left_sign != 1)) {
              arc_left_sign = 1;
              lv_anim_set_var(&all_anim_obj, obj);
              lv_anim_start(&all_anim_obj);
          }else {
              arc_left_sign = 2;
              lv_anim_del(obj, (lv_anim_exec_xcb_t)lv_anim_ima_sa_ima_function_cb);
          }
      }else if(obj == arc_right) {
          if(arc_control && (arc_right_sign != 1)) {
              arc_right_sign = 1;
              lv_anim_set_var(&all_anim_obj, obj);
              lv_anim_start(&all_anim_obj);
          }else {
              arc_right_sign = 2;
              lv_anim_del(obj, (lv_anim_exec_xcb_t)lv_anim_ima_sa_ima_function_cb);
          }        
      }

}

void callback_direction(lv_task_t* t) {
  /*direction task*/
    static int _timer_index=1;
    if(_timer_index<1)
    {
      _timer_index=1;
    }
  
      if(task_callback_direction_sign == 1) {
          if(_timer_index == 1) {
              lv_obj_set_hidden(ima_direction, true);
          }else {
              lv_obj_set_hidden(ima_direction, false);
              _timer_index = 0;
          }
      }else if(task_callback_direction_sign == 2) {
          lv_obj_set_hidden(ima_direction, true);
          lv_task_del(t);
      }
  
    _timer_index++;

}

int task_callback_right_light_sign = -1; lv_task_t* task_callback_right_light; 
void water_gear_control(bool icon_control, uint32_t anim_time) {
  /*water control fullction*/
      if(icon_control && (task_callback_water_sign != 1)) {
         lv_img_set_src(ima_gear_left, &imgleft_first_gear_png);
         task_callback_water_sign = 1; 
         task_callback_water = lv_task_create(callback_water, anim_time, LV_TASK_PRIO_HIGH , NULL);
      }else {
         task_callback_water_sign = 2; 
      }

}

void callback_right_light(lv_task_t* t) {
  /*right_light task*/
    static int _timer_index=1;
    if(_timer_index<1)
      _timer_index=1;
    if(task_callback_right_light_sign == 1) {
        if(_timer_index == 1) {
            lv_img_set_src(ima_turn_right, &imgturn_right_off_png);
        }else {
            lv_img_set_src(ima_turn_right, &imgturn_right_on_png);
            _timer_index = 0;
        }
    }else if(task_callback_right_light_sign == 2) {
          lv_img_set_src(ima_turn_right, &imgturn_right_off_png);
          lv_task_del(t);
    }
  
    _timer_index++;

}

void tank_gear_control(bool icon_control, uint32_t anim_time) {
  /*tank control fullction*/
      if(icon_control && (task_callback_tank_sign != 1)) {
         lv_img_set_src(ima_gear_right, &imgright_first_gear_png);
         task_callback_tank_sign = 1; 
         task_callback_water = lv_task_create(callback_tank, anim_time, LV_TASK_PRIO_HIGH , NULL);
      }else {
         task_callback_tank_sign = 2; 
      }

}

void time_sign_control( bool sign_control, uint32_t anim_time) {
  /*time sign control fullction*/
      if(sign_control && (task_callback_time_sign != 1)) {
          lv_label_set_text(lab_time_sign, "");
          task_callback_time_sign = 1;
          task_callback_time = lv_task_create(callback_time, anim_time, LV_TASK_PRIO_HIGH , NULL);
      }else {
          task_callback_time_sign = 2;        
      }

}

void icon_control_fullction(lv_obj_t* obj, bool icon_control) {
  /*all icon*/
      int obj_sign = -1;
      if(obj == ima_alternator) {
          obj_sign = 0;
      }else if(obj == ima_light) {
          obj_sign = 1;
      }else if(obj == ima_ABS) {
          obj_sign = 2;
      }else if(obj == ima_belt) {
          obj_sign = 3;
      }
  
      switch(obj_sign){
          case 0: 
              if(icon_control) {
                  lv_img_set_src(obj, &imgalternator_on_png);
              }else{
                  lv_img_set_src(obj, &imgalternator_off_png);    
              } 
              break;
          case 1: 
              if(icon_control) {
                  lv_img_set_src(obj, &imglight_on_png);
              }else{
                  lv_img_set_src(obj, &imglight_off_png);    
              } 
              break;
          case 2: 
              if(icon_control) {
                  lv_img_set_src(obj, &imgABS_on_png);
              }else{
                  lv_img_set_src(obj, &imgABS_off_png);    
              } 
              break;
          case 3:
              if(icon_control) {
                  lv_img_set_src(obj, &imgsafety_belt_on_png);
              }else{
                  lv_img_set_src(obj, &imgsafety_belt_off_png);    
              } 
              break;
      }

}

void direction_icon_control(bool icon_control, uint32_t anim_time) {
  /*direction sign control fullction*/
      if(icon_control && (task_callback_direction_sign != 1)) {
          lv_obj_set_hidden(ima_direction, false);
          task_callback_direction_sign = 1;
          task_callback_direction = lv_task_create(callback_direction, anim_time, LV_TASK_PRIO_HIGH , NULL);
      }else {
          task_callback_direction_sign = 2;        
      }

}

void light_icon_control_fullction(lv_obj_t* obj, bool icon_control, uint32_t anim_time) {
  /*light icon control fullction*/
      int obj_sign = -1;
      if(obj == ima_turn_left) {
          obj_sign = 0;
      }else if(obj == ima_turn_right) {
          obj_sign = 1;
      }
  
      switch(obj_sign) {
          case 0:
              if(icon_control && (task_callback_left_light_sign != 1)) {
                  lv_img_set_src(ima_turn_left, &imgturn_left_on_png);
                  task_callback_left_light_sign = 1;
                  task_callback_left_light=lv_task_create(callback_left_light, anim_time, LV_TASK_PRIO_HIGH , NULL);
              }else{
                  task_callback_left_light_sign = 2;
              }
              break;
          case 1:
              if(icon_control && (task_callback_right_light_sign != 1)) {
                  lv_img_set_src(ima_turn_right, &imgturn_right_on_png);
                  task_callback_right_light_sign = 1;
                  task_callback_left_light=lv_task_create(callback_right_light, anim_time, LV_TASK_PRIO_HIGH , NULL);
              }else{
                  task_callback_right_light_sign = 2;
              }
              break;
      }

}

void style_init(void) {
      /*arc_left*/
      lv_obj_set_style_local_line_rounded(arc_left,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_line_rounded(arc_left,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_bg_opa(arc_left,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,255);
      lv_obj_set_style_local_bg_opa(arc_left,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_line_width(arc_left,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_outline_width(arc_left,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_outline_width(arc_left,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_outline_opa(arc_left,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_outline_opa(arc_left,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_outline_width(arc_left,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_outline_opa(arc_left,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_line_opa(arc_left,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,255);
      lv_obj_set_style_local_border_opa(arc_left,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,0); 
  
      /*arc_right*/
      lv_obj_set_style_local_line_rounded(arc_right,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_line_rounded(arc_right,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_bg_opa(arc_right,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,255);
      lv_obj_set_style_local_bg_opa(arc_right,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_line_width(arc_right,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_outline_width(arc_right,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_outline_width(arc_right,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_outline_opa(arc_right,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_outline_opa(arc_right,LV_ARC_PART_BG,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_outline_width(arc_right,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_outline_opa(arc_right,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,0);
      lv_obj_set_style_local_line_opa(arc_right,LV_ARC_PART_INDIC,LV_STATE_DEFAULT,255);
      lv_obj_set_style_local_border_opa(arc_right,LV_OBJ_PART_MAIN,LV_STATE_DEFAULT,0);
  
      /*label*/
      lv_obj_set_style_local_text_opa(lab_temperature, LV_TABLE_PART_BG, LV_STATE_DEFAULT, LV_OPA_30);
      lv_obj_set_style_local_text_opa(lab_tem_com, LV_TABLE_PART_BG, LV_STATE_DEFAULT, LV_OPA_30);
      lv_obj_set_style_local_text_opa(lab_month, LV_TABLE_PART_BG, LV_STATE_DEFAULT, LV_OPA_30);
      lv_obj_set_style_local_text_opa(lab_date_sign, LV_TABLE_PART_BG, LV_STATE_DEFAULT, LV_OPA_30);
      lv_obj_set_style_local_text_opa(lab_day, LV_TABLE_PART_BG, LV_STATE_DEFAULT, LV_OPA_30);

}

void time_set(const char * hour_text, const char * minute_text) {
      lv_label_set_text(lab_time, hour_text);
      lv_label_set_text(lab_scr, minute_text);

}

void time_hour_set(const char * text) {
      lv_label_set_text(lab_time, text);

}

void time_minute_set(const char * text) {
      lv_label_set_text(lab_scr, text);

}

void date_set(const char * month_text, const char * day_text) {
      lv_label_set_text(lab_month, month_text);
      lv_label_set_text(lab_day, day_text);

}

void date_month_set(const char * text) {
      lv_label_set_text(lab_month, text);

}

void date_day_set(const char * text) {
      lv_label_set_text(lab_day, text);

}

void temperatrue_set(const char * text) {
      lv_label_set_text(lab_temperature, text);

}

void distance_set(const char * text) {
      lv_label_set_text(lab_distance, text);

}

void load_name_set(const char * text) {
      lv_label_set_text(lab_load_show, text);

}

void gear_set(const char * text) {
      lv_label_set_text(lab_gear, text);

}


lv_task_t* _task_callback_c3bs0u;
void callback_c3bs0u(lv_task_t* t){
  static int _timer_index=1;
  if(_timer_index<1)
    _timer_index=1;
  if (((int)_timer_index) == 1) {
    icon_control_fullction(ima_alternator, true);
    icon_control_fullction(ima_light, true);
    icon_control_fullction(ima_ABS, true);
    icon_control_fullction(ima_belt, true);
  } else if (((int)_timer_index) == 2) {
    icon_control_fullction(ima_alternator, false);
    icon_control_fullction(ima_light, false);
    icon_control_fullction(ima_ABS, false);
    icon_control_fullction(ima_belt, false);
    _timer_index = 0;
  }

  _timer_index++;
}
    void __qmsd_screen_main_init(void) {
  style_init();
  light_icon_control_fullction(ima_turn_left, true, 600);
  light_icon_control_fullction(ima_turn_right, true, 600);
  lv_anim_ima_sa_ima_function(arc_left, true, 3000);
  lv_anim_ima_sa_ima_function(arc_right, true, 3000);
  water_gear_control(true, 600);
  tank_gear_control(true, 600);
  time_sign_control(true, 1000);
  direction_icon_control(true, 2000);
  _task_callback_c3bs0u=lv_task_create(callback_c3bs0u,1000 , LV_TASK_PRIO_HIGH , NULL);
}
