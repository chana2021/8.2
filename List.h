#pragma once
//#include<cstring>
#include <iostream>
#include <string>
#pragma warning(disable:4996)

#define _CRT_SECURE_NO_WARNINGS

using namespace std;
class List
{
protected:

	class Link
	{
	public:
		// constructor
		Link(int linkValue, Link* nextPtr);
		Link(const Link&);
		// data areas
		int value;
		Link* next;
	};	//end of class Link
	void setNext(Link* ne);
public:
	// constructors
	List();
	List(const List&);
	~List();

	// operations
	void add(int value);
	int firstElement() const;
	bool search(const int& value) const;
	bool isEmpty() const;
	void removeFirst();

	void clear();
	friend ostream& operator<<(ostream& os, const List& r);//print
	friend istream& operator>>(istream& is, List& r);//relet
	void insert(int key);//put number in list
	void remove(int key);//remove number in list
	List& operator=(const List& l);

public:
	// data field
	Link* head;
};
