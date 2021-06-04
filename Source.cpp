
//targil 8 shela 2
// to tor with stack so put value 0-10 it tor 
#include <string>
#include <iostream>
#include "QueueStack.h"
//#include "Queue.h"
//#include "Stack.h"
//#include "List.h"
#include "StackList.h"
using namespace std;

int main() {
	Queue* Q;
	Q = new QueueStack();
	try {
		for (int i = 0; i < 10; i++) {
			Q->enqueue(i);
		}
			
	}
	catch (const char* msg)
	{
		cout << msg;
	}
	cout << "first on Q is: " << Q->front() << endl;
	cout << "take out 2 elemets:" << endl;
	cout << Q->dequeue() << ' ' << Q->dequeue() << endl;
	cout << "first on Q is: " << Q->front() << endl;
	Q->enqueue(8);
	Q->enqueue(9);
	while (!Q->isEmpty())
		cout << Q->dequeue() << " ";
	return 0;
}
