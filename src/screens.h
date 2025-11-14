#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main_screen;
    lv_obj_t *absolute_screen;
    lv_obj_t *relative_screen;
    lv_obj_t *division_screen;
    lv_obj_t *jog_screen;
    lv_obj_t *setup_screen;
    lv_obj_t *entry_screen;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *obj2;
    lv_obj_t *obj3;
    lv_obj_t *obj4;
    lv_obj_t *obj5;
    lv_obj_t *obj6;
    lv_obj_t *obj7;
    lv_obj_t *obj8;
    lv_obj_t *obj9;
    lv_obj_t *obj10;
    lv_obj_t *obj11;
    lv_obj_t *obj12;
    lv_obj_t *obj13;
    lv_obj_t *obj14;
    lv_obj_t *obj15;
    lv_obj_t *obj16;
    lv_obj_t *obj17;
    lv_obj_t *obj18;
    lv_obj_t *obj19;
    lv_obj_t *btn_division_prev;
    lv_obj_t *btn_division_next;
    lv_obj_t *obj20;
    lv_obj_t *obj21;
    lv_obj_t *jog_0_plus;
    lv_obj_t *jog_1_plus;
    lv_obj_t *jog_2_plus;
    lv_obj_t *jog_3_plus;
    lv_obj_t *jog_0_minus;
    lv_obj_t *jog_1_minus;
    lv_obj_t *jog_2_minus;
    lv_obj_t *jog_3_minus;
    lv_obj_t *obj22;
    lv_obj_t *obj23;
    lv_obj_t *obj24;
    lv_obj_t *obj25;
    lv_obj_t *obj26;
    lv_obj_t *obj27;
    lv_obj_t *obj28;
    lv_obj_t *obj29;
    lv_obj_t *obj30;
    lv_obj_t *obj31;
    lv_obj_t *obj32;
    lv_obj_t *angle_main;
    lv_obj_t *angle_step_1;
    lv_obj_t *obj33;
    lv_obj_t *obj34;
    lv_obj_t *angle_step;
    lv_obj_t *obj35;
    lv_obj_t *obj36;
    lv_obj_t *angle_divide;
    lv_obj_t *obj37;
    lv_obj_t *obj38;
    lv_obj_t *obj39;
    lv_obj_t *obj40;
    lv_obj_t *angle_jog;
    lv_obj_t *obj41;
    lv_obj_t *obj42;
    lv_obj_t *obj43;
    lv_obj_t *obj44;
    lv_obj_t *obj45;
    lv_obj_t *obj46;
    lv_obj_t *obj47;
    lv_obj_t *obj48;
    lv_obj_t *obj49;
    lv_obj_t *obj50;
    lv_obj_t *obj51;
    lv_obj_t *obj52;
    lv_obj_t *obj53;
    lv_obj_t *entry_input;
    lv_obj_t *entry_kb;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN_SCREEN = 1,
    SCREEN_ID_ABSOLUTE_SCREEN = 2,
    SCREEN_ID_RELATIVE_SCREEN = 3,
    SCREEN_ID_DIVISION_SCREEN = 4,
    SCREEN_ID_JOG_SCREEN = 5,
    SCREEN_ID_SETUP_SCREEN = 6,
    SCREEN_ID_ENTRY_SCREEN = 7,
};

void create_screen_main_screen();
void tick_screen_main_screen();

void create_screen_absolute_screen();
void tick_screen_absolute_screen();

void create_screen_relative_screen();
void tick_screen_relative_screen();

void create_screen_division_screen();
void tick_screen_division_screen();

void create_screen_jog_screen();
void tick_screen_jog_screen();

void create_screen_setup_screen();
void tick_screen_setup_screen();

void create_screen_entry_screen();
void tick_screen_entry_screen();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/