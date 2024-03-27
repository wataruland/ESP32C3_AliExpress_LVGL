SET(SOURCES screens/ui_ScreenCPU.c
    screens/ui_ScreenGPU.c
    screens/ui_ScreenTime.c
    screens/ui_ScreenCPUHist.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_z2_png.c
    fonts/ui_font_Font3270T24.c)

add_library(ui ${SOURCES})
