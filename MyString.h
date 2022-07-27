//
// Created by nimbl on 7/15/2022.
//

#ifndef MYLISTIMPLEMENTATION_MYSTRING_H
#define MYLISTIMPLEMENTATION_MYSTRING_H

#include <iostream>

class MyString {
public:
    char* content;

    explicit MyString(const char* _content);

    int length() const;

    virtual char* toString() const;

    MyString operator+(const MyString& toAdd) const;

    void append(const MyString& toAppend);
    char at(int index) const;
    bool empty() const;
};


#endif //MYLISTIMPLEMENTATION_MYSTRING_H
