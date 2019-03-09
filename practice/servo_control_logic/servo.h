#ifndef SERVO_H_INCLUDED
#define SERVO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef enum {
    FULL_LEFT,
    HALF_LEFT,
    QUARTER_LEFT,
    CENTER,
    QUARTER_RIGHT,
    HALF_RIGHT,
    FULL_RIGHT,
} directions;

void direction_selector();
int random_generator();


#endif // SERVO_H_INCLUDED

