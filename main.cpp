#include <iostream>
#include "MyString.h"
#include "MyList.h"

int main() {
    MyString hello("Helsdadlo ");
    MyString world("Worfdsld!");
    MyString worlds("Wofdwerld!");
    MyString worldsy("Wowrld!");
    MyString worldz("Wofddrld!");

    MyList<MyString> test{};

    test.add(hello);
    test.add(world);
    test.add(worlds);
    test.add(worldsy);
    test.add(worldz);


    std::cout << test.get(0).toString() << std::endl;

	return 0;
}

