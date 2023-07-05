#include "application.h"

#include <iostream>

struct application
{
    struct my_object *obj = (struct my_object *)alloca(my_object_size());
};

int application_init(struct application *self, int number_one = 0, int number_two = 0)
{
    std::cout << "[1] Still work in here: " << self << "\n";
    my_object_init(self->obj);
    my_object_modify(self->obj, number_one, number_two);
    return 0;
}

int application_get_number_one(struct application *self)
{
    return get_my_object_number_one(self->obj);
}