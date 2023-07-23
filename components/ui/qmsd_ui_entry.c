#include "qmsd_ui_entry.h"
#include "qmsd_ctrl.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    lv_img_src_t* img;
} qmsd_img_t;

typedef struct
{
    char *name;
    lv_font_t* font;
} qmsd_font_t;

/*
* includes
*/

/*
* declear screens
*/

lv_obj_t * g_kb = NULL;

static void g_kb_event_cb(lv_obj_t * event_kb, lv_event_t event)
{
    /* Just call the regular event handler */
    if(event == LV_EVENT_APPLY) {
        lv_obj_set_hidden(event_kb, true);
    } else if(event == LV_EVENT_CANCEL) {
        lv_obj_set_hidden(event_kb, true);
    }
    else if (event==LV_EVENT_DELETE){
        g_kb=NULL;
    } else {
        lv_keyboard_def_event_cb(event_kb, event);
    }
}
void g_create_kb_ifneeded() {
    if(g_kb == NULL) {
        g_kb = lv_keyboard_create(screen_main, NULL);
        lv_obj_set_pos(g_kb, 5, 90);
        lv_obj_set_event_cb(g_kb, g_kb_event_cb); /* Setting a custom event handler stops the keyboard from closing automatically */
        lv_obj_set_size(g_kb,  LV_HOR_RES - 10, 140);
        lv_keyboard_set_cursor_manage(g_kb, true); /* Automatically show/hide cursors on text areas */
        lv_obj_set_hidden(g_kb, true);
    }
}
void g_show_kb() 
{
    g_create_kb_ifneeded();
    lv_obj_set_parent(g_kb, lv_scr_act());
    lv_obj_set_hidden(g_kb, false);
    lv_obj_align(g_kb,NULL,LV_ALIGN_IN_BOTTOM_MID,0,0);
}

qmsd_img_t g_qmsd_img[] = 
{
        {"imgtop_bottom_image_png",&imgtop_bottom_image_png},
    {"imgdirection_sign_png",&imgdirection_sign_png},
    {"imgmap_mask_png",&imgmap_mask_png},
    {"imgmap_png",&imgmap_png},
    {"imgsafety_belt_off_png",&imgsafety_belt_off_png},
    {"imgABS_off_png",&imgABS_off_png},
    {"imgturn_right_off_png",&imgturn_right_off_png},
    {"imgturn_left_off_png",&imgturn_left_off_png},
    {"imgalternator_off_png",&imgalternator_off_png},
    {"imggear_P_png",&imggear_P_png},
    {"imggear_S_png",&imggear_S_png},
    {"imggear_N_png",&imggear_N_png},
    {"imggear_D_png",&imggear_D_png},
    {"imglight_off_png",&imglight_off_png},
    {"imgmeter_right_bottom_png",&imgmeter_right_bottom_png},
    {"imgmeter_left_png",&imgmeter_left_png},
    {"imgright_first_gear_png",&imgright_first_gear_png},
    {"imgright_second_gear_png",&imgright_second_gear_png},
    {"imgright_third_gear_png",&imgright_third_gear_png},
    {"imgleft_third_gear_png",&imgleft_third_gear_png},
    {"imgleft_second_gear_png",&imgleft_second_gear_png},
    {"imgleft_first_gear_png",&imgleft_first_gear_png},
    {"imgmeter_left_bottom_png",&imgmeter_left_bottom_png},
    {"imgbottom_bottom_image_png",&imgbottom_bottom_image_png},
    {"imgtank_off_png",&imgtank_off_png},
    {"imgmeter_right_png",&imgmeter_right_png},
    {"imgalternator_on_png",&imgalternator_on_png},
    {"imgright_zero_gear_png",&imgright_zero_gear_png},
    {"imgleft_zero_gear_png",&imgleft_zero_gear_png},
    {"imgsun_png",&imgsun_png},
    {"imgbbb_png",&imgbbb_png},
    {"imggear_bottom_png",&imggear_bottom_png},
    {"imgaaa_png",&imgaaa_png},
    {"imgturn_right_on_png",&imgturn_right_on_png},
    {"imgturn_left_on_png",&imgturn_left_on_png},
    {"imgwater_off_png",&imgwater_off_png},
    {"imgsafety_belt_on_png",&imgsafety_belt_on_png},
    {"imgABS_on_png",&imgABS_on_png},
    {"imglight_on_png",&imglight_on_png},
    {"imgright_meter_2_png",&imgright_meter_2_png},
    {"imgright_front_png",&imgright_front_png},
    {"imgleft_front_png",&imgleft_front_png},
    {"imggo_straight_png",&imggo_straight_png},
    {"imgleft_turn_png",&imgleft_turn_png},
    {"imgright_turn_png",&imgright_turn_png},
    {"imgleft_turn_round_png",&imgleft_turn_round_png},
    {"imgright_turn_round_png",&imgright_turn_round_png},
    {"imgleft_gear_all_png",&imgleft_gear_all_png},
    {"imgright_gear_all_png",&imgright_gear_all_png},
};

qmsd_font_t g_qmsd_font[] =
{
    {"ali_font_16",&ali_font_16},
    {"ali_font_32",&ali_font_32},
    {"ali_font_18",&ali_font_18},
    {"ali_font_40",&ali_font_40},
    {"ali_font_42",&ali_font_42},
    {"ali_font_15",&ali_font_15},
};

void qmsd_ui_entry(void)
{
    qmsd_screen_list_init(16);
    qmsd_set_screen(qmsd_search_screen);
    qmsd_set_widget(qmsd_search_widget);
    qmsd_set_img(qmsd_get_img);
    qmsd_set_font(qmsd_get_font);
    
    screen_main_build();

    screen_main_show();
}

lv_img_src_t *qmsd_get_img(const char *w_name)
{
    int i = 0;

    for (i = 0; i < (sizeof(g_qmsd_img) / sizeof(g_qmsd_img[0])); i++)
    {
        if (!strcmp(w_name, g_qmsd_img[i].name))
        {
            if (g_qmsd_img[i].img) {
                return g_qmsd_img[i].img;
            } else {
                return NULL;
            }
        }
    }

    return NULL;
}

lv_font_t *qmsd_get_font(const char *w_name)
{
    int i = 0;

    for (i = 0; i < (sizeof(g_qmsd_font) / sizeof(g_qmsd_font[0])); i++)
    {
        if (!strcmp(w_name, g_qmsd_font[i].name))
        {
            if (g_qmsd_font[i].font) {
                return g_qmsd_font[i].font;
            } else {
                return NULL;
            }
        }
    }

    return NULL;
}