#ifndef APP_H
#define APP_H

#include "../my_object/my_object.h"

struct application;

int application_init(struct application *self, int number_one, int number_two);

int application_get_number_one(struct application *self);

#endif