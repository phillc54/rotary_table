#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations

typedef enum {
    ENTRY_NONE = 0,
    ENTRY_RELATIVE_MOVE = 101,
    ENTRY_DEGREES_PER_REV = 102,
    ENTRY_DIVISION_START = 103,
    ENTRY_DIVISION_END = 104,
    ENTRY_ABSOLUTE_POSITION = 105,
    ENTRY_STEPS_PER_REV = 201,
    ENTRY_MICROSTEPS = 202,
    ENTRY_DEGREES_PER_SEC = 203,
    ENTRY_DIVISION_STEPS = 204,
    ENTRY_DEGREES_ACCEL = 205
} ENTRY;

// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_PREVIOUS_FLOAT = 0,
    FLOW_GLOBAL_VARIABLE_PREVIOUS_INT = 1
};

// Native global variables

extern float get_var_absolute_position();
extern void set_var_absolute_position(float value);
extern float get_var_current_position();
extern void set_var_current_position(float value);
extern int32_t get_var_current_division();
extern void set_var_current_division(int32_t value);
extern int32_t get_var_degrees_accel();
extern void set_var_degrees_accel(int32_t value);
extern float get_var_degrees_per_rev();
extern void set_var_degrees_per_rev(float value);
extern int32_t get_var_degrees_per_sec();
extern void set_var_degrees_per_sec(int32_t value);
extern float get_var_division_angle();
extern void set_var_division_angle(float value);
extern float get_var_division_end();
extern void set_var_division_end(float value);
extern float get_var_division_start();
extern void set_var_division_start(float value);
extern int32_t get_var_division_steps();
extern void set_var_division_steps(int32_t value);
extern ENTRY get_var_entries();
extern void set_var_entries(ENTRY value);
extern int32_t get_var_entry_type();
extern void set_var_entry_type(int32_t value);
extern int32_t get_var_jog_command();
extern void set_var_jog_command(int32_t value);
extern float get_var_jog_10_steps();
extern void set_var_jog_10_steps(float value);
extern float get_var_jog_100_steps();
extern void set_var_jog_100_steps(float value);
extern float get_var_jog_1_step();
extern void set_var_jog_1_step(float value);
extern float get_var_jog_1000_steps();
extern void set_var_jog_1000_steps(float value);
extern int32_t get_var_micro_steps();
extern void set_var_micro_steps(int32_t value);
extern float get_var_relative_move();
extern void set_var_relative_move(float value);
extern int32_t get_var_steps_per_rev();
extern void set_var_steps_per_rev(int32_t value);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/