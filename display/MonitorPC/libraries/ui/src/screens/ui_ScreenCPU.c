// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: MonitorPC

#include "../ui.h"

void ui_ScreenCPU_screen_init(void)
{
    ui_ScreenCPU = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenCPU, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_CPUPanelOjos = lv_obj_create(ui_ScreenCPU);
    lv_obj_set_width(ui_CPUPanelOjos, 74);
    lv_obj_set_height(ui_CPUPanelOjos, 27);
    lv_obj_set_x(ui_CPUPanelOjos, -3);
    lv_obj_set_y(ui_CPUPanelOjos, 15);
    lv_obj_set_align(ui_CPUPanelOjos, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_CPUPanelOjos, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_CPUPanelBoca = lv_obj_create(ui_ScreenCPU);
    lv_obj_set_width(ui_CPUPanelBoca, 51);
    lv_obj_set_height(ui_CPUPanelBoca, 27);
    lv_obj_set_x(ui_CPUPanelBoca, -2);
    lv_obj_set_y(ui_CPUPanelBoca, 61);
    lv_obj_set_align(ui_CPUPanelBoca, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_CPUPanelBoca, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_CPUImageFondo = lv_img_create(ui_ScreenCPU);
    lv_img_set_src(ui_CPUImageFondo, &ui_img_z2_png);
    lv_obj_set_width(ui_CPUImageFondo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CPUImageFondo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_CPUImageFondo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CPUImageFondo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_CPUImageFondo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_CPUImageFondo, &ui_img_z2_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_CPUImageFondo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_CPUImageFondo, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CPUArcTemp = lv_arc_create(ui_ScreenCPU);
    lv_obj_set_width(ui_CPUArcTemp, 230);
    lv_obj_set_height(ui_CPUArcTemp, 230);
    lv_obj_set_align(ui_CPUArcTemp, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_CPUArcTemp, 1);
    lv_arc_set_bg_angles(ui_CPUArcTemp, 284, 180);
    lv_obj_set_style_arc_color(ui_CPUArcTemp, lv_color_hex(0x2F2F33), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_CPUArcTemp, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_CPUArcTemp, lv_color_hex(0xFF4440), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_CPUArcTemp, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_CPUArcTemp, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_CPUArcTemp, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_CPULabelTemp = lv_label_create(ui_ScreenCPU);
    lv_obj_set_width(ui_CPULabelTemp, 40);
    lv_obj_set_height(ui_CPULabelTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CPULabelTemp, -5);
    lv_obj_set_y(ui_CPULabelTemp, -109);
    lv_obj_set_align(ui_CPULabelTemp, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CPULabelTemp, "000");
    lv_obj_set_style_text_align(ui_CPULabelTemp, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CPUArcVent1 = lv_arc_create(ui_ScreenCPU);
    lv_obj_set_width(ui_CPUArcVent1, 200);
    lv_obj_set_height(ui_CPUArcVent1, 200);
    lv_obj_set_align(ui_CPUArcVent1, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_CPUArcVent1, 500, 1800);
    lv_arc_set_value(ui_CPUArcVent1, 510);
    lv_arc_set_bg_angles(ui_CPUArcVent1, 285, 180);
    lv_obj_set_style_arc_color(ui_CPUArcVent1, lv_color_hex(0x2F2F33), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_CPUArcVent1, 128, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_CPUArcVent1, lv_color_hex(0x2A04FB), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_CPUArcVent1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_CPUArcVent1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_CPUArcVent1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_CPULabelVent1 = lv_label_create(ui_ScreenCPU);
    lv_obj_set_width(ui_CPULabelVent1, 40);
    lv_obj_set_height(ui_CPULabelVent1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CPULabelVent1, -5);
    lv_obj_set_y(ui_CPULabelVent1, -92);
    lv_obj_set_align(ui_CPULabelVent1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CPULabelVent1, "0000");
    lv_obj_set_style_text_align(ui_CPULabelVent1, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CPUArcVent2 = lv_arc_create(ui_ScreenCPU);
    lv_obj_set_width(ui_CPUArcVent2, 170);
    lv_obj_set_height(ui_CPUArcVent2, 170);
    lv_obj_set_align(ui_CPUArcVent2, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_CPUArcVent2, 450, 1850);
    lv_arc_set_value(ui_CPUArcVent2, 460);
    lv_arc_set_bg_angles(ui_CPUArcVent2, 288, 180);
    lv_obj_set_style_arc_color(ui_CPUArcVent2, lv_color_hex(0x2F2F33), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_CPUArcVent2, 128, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_CPUArcVent2, lv_color_hex(0x04EFFB), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_CPUArcVent2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_CPUArcVent2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_CPUArcVent2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_CPULabelVent2 = lv_label_create(ui_ScreenCPU);
    lv_obj_set_width(ui_CPULabelVent2, 40);
    lv_obj_set_height(ui_CPULabelVent2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CPULabelVent2, -5);
    lv_obj_set_y(ui_CPULabelVent2, -75);
    lv_obj_set_align(ui_CPULabelVent2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CPULabelVent2, "0000");
    lv_obj_set_style_text_align(ui_CPULabelVent2, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CPULabelLoad = lv_label_create(ui_ScreenCPU);
    lv_obj_set_width(ui_CPULabelLoad, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CPULabelLoad, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CPULabelLoad, 0);
    lv_obj_set_y(ui_CPULabelLoad, 8);
    lv_obj_set_align(ui_CPULabelLoad, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CPULabelLoad, "8.8");
    lv_obj_set_style_text_align(ui_CPULabelLoad, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CPULabelLoad, &ui_font_Font3270T24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CPULabelLoadText = lv_label_create(ui_ScreenCPU);
    lv_obj_set_width(ui_CPULabelLoadText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CPULabelLoadText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CPULabelLoadText, -3);
    lv_obj_set_y(ui_CPULabelLoadText, -24);
    lv_obj_set_align(ui_CPULabelLoadText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CPULabelLoadText, "CPU LOAD");
    lv_obj_set_style_text_color(ui_CPULabelLoadText, lv_color_hex(0x05F3FB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CPULabelLoadText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_CPULabelLoadText, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CPULabelLoadText, &ui_font_Font3270T24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CPUPanelTouch = lv_obj_create(ui_ScreenCPU);
    lv_obj_set_width(ui_CPUPanelTouch, 240);
    lv_obj_set_height(ui_CPUPanelTouch, 240);
    lv_obj_set_align(ui_CPUPanelTouch, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_CPUPanelTouch, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_CPUPanelTouch, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_CPUPanelTouch, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ScreenCPU, ui_event_ScreenCPU, LV_EVENT_ALL, NULL);

}
