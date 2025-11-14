#ifndef EEZ_LVGL_UI_EVENTS_H
#define EEZ_LVGL_UI_EVENTS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void action_relative_move(lv_event_t * e);
extern void action_decimal_hide(lv_event_t * e);
extern void action_decimal_show(lv_event_t * e);
extern void action_get_input_float(lv_event_t * e);
extern void action_get_input_int(lv_event_t * e);
extern void action_goto_division(lv_event_t * e);
extern void action_absolute_move(lv_event_t * e);
extern void action_goto_zero(lv_event_t * e);
extern void action_jog_continuous(lv_event_t * e);
extern void action_jog_incremental(lv_event_t * e);
extern void action_set_input_float(lv_event_t * e);
extern void action_set_input_int(lv_event_t * e);
extern void action_set_zero(lv_event_t * e);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_EVENTS_H*/