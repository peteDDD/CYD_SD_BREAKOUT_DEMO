SET(SOURCES screens/ui_ScreenSDbreakoutDemo.c
    screens/ui_ScreenPinout.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.cpp
    images/ui_img_micro_sd_sniffer_2_320px_png.c)

add_library(ui ${SOURCES})
