// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: CYD_SD_BREAKOUT_DEMO

#include "../ui.h"

void ui_ScreenPinout_screen_init(void)
{
    ui_ScreenPinout = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenPinout, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ButtonReturn = lv_btn_create(ui_ScreenPinout);
    lv_obj_set_width(ui_ButtonReturn, 100);
    lv_obj_set_height(ui_ButtonReturn, 50);
    lv_obj_set_x(ui_ButtonReturn, 0);
    lv_obj_set_y(ui_ButtonReturn, 87);
    lv_obj_set_align(ui_ButtonReturn, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonReturn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonReturn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelReturn = lv_label_create(ui_ScreenPinout);
    lv_obj_set_width(ui_LabelReturn, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelReturn, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelReturn, 0);
    lv_obj_set_y(ui_LabelReturn, 87);
    lv_obj_set_align(ui_LabelReturn, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelReturn, "RETURN");
    lv_obj_set_style_text_color(ui_LabelReturn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelReturn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image3 = lv_img_create(ui_ScreenPinout);
    lv_img_set_src(ui_Image3, &ui_img_micro_sd_sniffer_2_320px_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 320
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 168
    lv_obj_set_x(ui_Image3, 0);
    lv_obj_set_y(ui_Image3, -30);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_ButtonReturn, ui_event_ButtonReturn, LV_EVENT_ALL, NULL);

}
