#include <iostream>
#include "lib/app/application.h"

int main()
{
    std::cout << "hi\n";
    application *data, *data2;

    std::cout << "[0] Still work in here: " << data << "\n";

    application_init(data, 100, 5);
    application_init(data2, 500, 20);

    std::cout << application_get_number_one(data) << "\n";
    std::cout << application_get_number_one(data2) << "\n";

    // std::cout << my_object_size();

    return 0;
}