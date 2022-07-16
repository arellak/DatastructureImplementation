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
    static int str_length(const MyString& str);

    virtual char* toString() const;

    MyString operator+(const MyString& toAdd) const;
    void append(const MyString& toAppend);

};


#endif //MYLISTIMPLEMENTATION_MYSTRING_H
