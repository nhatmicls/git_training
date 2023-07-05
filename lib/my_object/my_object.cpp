#include "my_object.h"

#include <cstring>
#include <cstdlib>

#include <iostream>

struct __attribute__((__packed__)) my_object
{
    int32_t number_one;
    int32_t number_two;
};

struct my_object *my_object_new()
{
    return (struct my_object *)malloc(sizeof(struct my_object));
};

int my_object_init(struct my_object *self)
{
    std::cout << "[2] Still work in here: " << self << "\n";
    std::cout << "[2.1] Still work in here: " << &(self->number_one) << "\n";
    std::cout << "[2.2] Still work in here: " << &(self->number_two) << "\n";
    std::cout << "[2.3] Still work in here: " << sizeof(*self) << "\n";
    memset(self, 0, sizeof(*self));
    std::cout << "[3] Still work in here: " << self << "\n";
    return 0;
}

int my_object_deinit(struct my_object *self)
{
    memset(self, 0, sizeof(*self));

    return 0;
}

size_t my_object_size(void)
{
    return sizeof(struct my_object);
}

int my_object_modify(struct my_object *self, int32_t number_one, int32_t number_two)
{
    self->number_one = number_one;
    self->number_two = number_two;

    return 0;
}

int get_my_object_number_one(struct my_object *self)
{
    return self->number_one;
}

int get_my_object_number_two(struct my_object *self)
{
    return self->number_two;
}
