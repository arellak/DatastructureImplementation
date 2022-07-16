#include <iostream>
#include "MyString.h"

int main() {
//    MyList<std::string_view> testList;
//    std::string blub = "test";
//    std::string a = "hallo";
//    std::string b = "bye";
//    std::string c = "nope";
//    std::string d = "yes";
//
//    testList.add(a);
//    testList.add(b);
//    testList.add(c);
//    testList.add(d);

//    for(int i = 0; i < 5; i++) {
        // testList.add(i);
//    }

//    std::cout << testList.get(2) << std::endl;
//    std::cout << testList.size << std::endl;
//    std::cout << testList.maxSize << std::endl;

    MyString hello("Hello ");
    MyString world("World!");
    world.append(hello);

    std::cout << world.toString() << std::endl;
    // std::cout << sex.content << std::endl;


//    for(int i = 0; i < testList.size; i++) {
        //std::cout << testList.startPoint[i] << std::endl;
//    }

	return 0;
}

