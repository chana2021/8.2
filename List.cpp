#include "List.h"
//#include <cstring>
#include <string>
#include <iostream>
using namespace std;

List::Link::Link(int val, Link* nxt) : value(val), next(nxt)
{}


List::Link::Link(const Link& source) : value(source.value), next(source.next)
{}


List::List() : head(NULL)
{
	// no further initialization
}

List::List(const List& l)//deep copy
{
	Link* src, * trg;
	if (l.head == NULL)
		head = NULL;
	else
	{
		head = new Link((l.head)->value, NULL);
		src = l.head;
		trg = head;
		while (src->next != NULL)
		{
			trg->next = new Link((src->next)->value, NULL);
			src = src->next;
			trg = trg->next;
		}
	}
}


List::~List()
{
	clear();
}
void List::setNext(Link* ne) {

}

void List::clear()
{
	// empty all elements from the List
	Link* theNext;
	for (Link* p = head; p != NULL; p = theNext)
	{
		// delete the element pointed to by p
		theNext = p->next;
		p->next = NULL;
		delete p;
	}
	// mark that the List contains no elements
	head = NULL;
}

bool List::isEmpty() const
{
	// test to see if the List is empty
	// List is empty if the pointer to the head
	// Link is null
	return head == NULL;
}

void List::add(int val)
{
	//Add a new value to the front of a Linked List
	head = new Link(val, head);
	if (head == NULL)
		throw "failed in memory allocation";
}

int List::firstElement() const
{
	// return first value in List
	if (isEmpty())
		throw "the List is empty, no first Element";
	return head->value;
}

bool  List::search(const int& val) const
{
	// loop to test each element
	for (Link* p = head; p != NULL; p = p->next)
		if (val == p->value)
			return true;
	// not found
	return false;
}


void List::removeFirst()
{
	// make sure there is a first element
	if (isEmpty())
		throw "the List is empty, no Elements to remove";
	// save pointer to the removed node
	Link* p = head;
	// reassign the first node
	head = p->next;
	p->next = NULL;
	// recover memory used by the first element
	delete p;
}
//List List::operator=(const List& r) {//copy

//}
ostream& operator<<(ostream& os, const List& r) {//print
	List::Link* ptr, * pr;
	if (r.head == NULL)
		cout << "NULL";
	else {
		ptr = r.head;
		//pr = head;
		while (ptr != NULL) {
			os << ptr->value << " ";
			// pr = pr->next;
			ptr = ptr->next;
		}
	}

	return os;
}
istream& operator>>(istream& is, List& r)//kolet
{
	int firth;
	is >> firth;//kolet firth

	//r.head->value = firth;//put in list
	r.head = new List::Link(firth, NULL);//put in list
	List::Link* llist = r.head;

	is >> firth;
	while (firth < llist->value) {//while kpler small
		llist->next = new List::Link(firth, NULL);
		llist = llist->next;
		is >> firth;
	}
	return is;

}
void List::insert(int key)//put number in list
{
	List::Link* p = head;
	if (head == NULL)
		head = new Link(key, head);
	else {
		if (p->value < key)
			head = new Link(key, p);
		else {
			while ((p->next != NULL) && (p->next->value > key)) {
				p = p->next;
			}
			if ((p->next != NULL) && (p->next->value <= key))
			{
				Link* ptr = p->next;
				p->next = new Link(key, ptr);

			}
			else {
				p->next = new Link(key, NULL);
			}


		}

	}


}
void List::remove(int key)//remove number in list
{
	List::Link* ptr = head;//ptr to head
	List::Link* p = head;
	if (isEmpty())
		throw "value not found\n";
	if (head->value == key)
		removeFirst();
	else
	{

		while ((p->next != NULL) && (p->next->value != key)) {
			p = p->next;
		}
		if ((p->next != NULL) && (p->next->value == key))
		{
			ptr = p;//betor value to delet
			p = p->next;//to delet
			Link* det = p;
			det = p->next;//after value to delet
			p->next = NULL;
			// recover memory used by the first element
			ptr->next = det;
			delete p;
		}
		else
			throw "value not found\n";
	}
}
List& List:: operator=(const List& l) {
	Link* ptr, * p;
	if (l.head == NULL)
		head = NULL;
	else
	{
		head = new Link((l.head)->value, NULL);
		ptr = l.head;
		p = head;
		while (ptr->next != NULL)
		{
			p->next = new Link((ptr->next)->value, NULL);
			ptr = ptr->next;
			p = p->next;
		}
	}
	return *this;
}