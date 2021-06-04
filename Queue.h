#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#pragma warning(disable:4996)
//#include<cstring>
using namespace std;
class Queue
{
public:
    virtual void clear() = 0;
    virtual void enqueue(int value) = 0;
    virtual int dequeue() = 0;
    virtual int front() = 0;
    virtual bool isEmpty() const = 0;
};


