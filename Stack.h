#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
//#include<cstring>
#pragma warning(disable:4996)
using namespace std;
class Stack
{
public:
    virtual void clear() = 0;
    virtual bool isEmpty() const = 0;
    virtual int pop() = 0;
    virtual void push(int value) = 0;
    virtual int top() const = 0;
};

