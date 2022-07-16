#include <iostream>
#include "MyString.h"

int main() {
    MyString hello("Hello ");
    MyString world("World!");
    world.append(hello);

    std::cout << world.toString() << std::endl;

	return 0;
}

