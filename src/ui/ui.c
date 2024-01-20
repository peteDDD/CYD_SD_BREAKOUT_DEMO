// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: CYD_SD_BREAKOUT_DEMO

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_ScreenSDbreakoutDemo
void ui_ScreenSDbreakoutDemo_screen_init(void);
lv_obj_t * ui_ScreenSDbreakoutDemo;
void ui_event_SwitchGPIO18(lv_event_t * e);
lv_obj_t * ui_SwitchGPIO18;
lv_obj_t * ui_LabelGPIO18;
void ui_event_SwitchGPIO19(lv_event_t * e);
lv_obj_t * ui_SwitchGPIO19;
lv_obj_t * ui_LabelGPIO19;
void ui_event_SwitchGPIO23(lv_event_t * e);
lv_obj_t * ui_SwitchGPIO23;
lv_obj_t * ui_LabelGPIO23;
void ui_event_SwitchGPIO5(lv_event_t * e);
lv_obj_t * ui_SwitchGPIO5;
lv_obj_t * ui_LabelGPIO5;
void ui_event_ButtonViewPinout(lv_event_t * e);
lv_obj_t * ui_ButtonViewPinout;
void ui_event_LabelViewPinout(lv_event_t * e);
lv_obj_t * ui_LabelViewPinout;
lv_obj_t * ui_Label3;


// SCREEN: ui_ScreenPinout
void ui_ScreenPinout_screen_init(void);
lv_obj_t * ui_ScreenPinout;
void ui_event_ButtonReturn(lv_event_t * e);
lv_obj_t * ui_ButtonReturn;
lv_obj_t * ui_LabelReturn;
lv_obj_t * ui_Image3;
void ui_event____initial_actions0(lv_event_t * e);
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_SwitchGPIO18(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        FunctionToggleGPIO18(e);
    }
}
void ui_event_SwitchGPIO19(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        FunctionToggleGPIO19(e);
    }
}
void ui_event_SwitchGPIO23(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        FunctionToggleGPIO23(e);
    }
}
void ui_event_SwitchGPIO5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        FunctionToggleGPIO5(e);
    }
}
void ui_event_ButtonViewPinout(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScreenPinout, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_ScreenPinout_screen_init);
    }
}
void ui_event_LabelViewPinout(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScreenPinout, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_ScreenPinout_screen_init);
    }
}
void ui_event_ButtonReturn(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScreenSDbreakoutDemo, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0, &ui_ScreenSDbreakoutDemo_screen_init);
        ReturnClickedRestoreStates(e);
    }
}
void ui_event____initial_actions0(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        ClearLEDState(e);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_ScreenSDbreakoutDemo_screen_init();
    ui_ScreenPinout_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_obj_add_event_cb(ui____initial_actions0, ui_event____initial_actions0, LV_EVENT_ALL, NULL);

    lv_disp_load_scr(ui____initial_actions0);
    lv_disp_load_scr(ui_ScreenSDbreakoutDemo);
}
