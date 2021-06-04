#include "Queue.h"
#include "Stack.h"
//#include "List.h"
#include "StackList.h"
#include "QueueStack.h"
#include <string>
QueueStack::QueueStack() {//banai
	data = new StackList();
}
void QueueStack::clear()  {//clear the data the stach
	data->clear();
}
int QueueStack::dequeue()  {//out the ever
	Stack* ezer = new StackList();
	if (data->isEmpty())
		throw "Queue is empty";
	while (!data->isEmpty()) {
		ezer->push(data->pop());
	}
	int value = ezer->pop();
	while (!ezer->isEmpty()) {
		data->push(ezer->pop());
	}
	return value;
}
void QueueStack::enqueue(int value)  {//put ever in tor
	data->push(value);
}
int QueueStack::front()  {//read the value
	Stack* ezer = new StackList();
	if (data->isEmpty())
		throw "Queue is empty";
	while (!data->isEmpty()) {
		ezer->push(data->pop());
	}
	int value = ezer->top();
	while (!ezer->isEmpty()) {
		data->push(ezer->pop());
	}
	return value;
}
bool QueueStack::isEmpty() const  {//chak to the tor it tor empty return true else false
	if (data->isEmpty() == true)
		return true;
	else
		return false;
}