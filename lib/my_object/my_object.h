#ifndef MY_OBJECT_H
#define MY_OBJECT_H

#include <stdint.h>
#include <cstddef>

struct my_object;

struct my_object *my_object_new();
int my_object_init(struct my_object *self);
int my_object_deinit(struct my_object *self);

size_t my_object_size(void);

int my_object_modify(struct my_object *self, int32_t number_one, int32_t number_two);
int get_my_object_number_one(struct my_object *self);

#endif