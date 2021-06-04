#pragma once
#include "Queue.h"
#include "Stack.h"
#include <string>
//#include "List.h"
//#include "StackList.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
class QueueStack : public Queue
{
protected:
	Stack* data;
public:
	QueueStack();
	void clear() override;
	int dequeue() override;
	void enqueue(int value) override;
	int front() override;
	bool isEmpty() const override;
};

