#pragma once
#include <string>
#include "List.h"
#include "Stack.h"
#include <iostream>
//#include<cstring>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

using namespace std;
class StackList : public Stack
{
public:
    // constructors
    StackList();
    StackList(const StackList&);

    // Stack operations
    void clear();
    bool isEmpty() const;
    int pop();
    void push(int value);
    int top() const;

protected:
    // data fields
    List data;
};

