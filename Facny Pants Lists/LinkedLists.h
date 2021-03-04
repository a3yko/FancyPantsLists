#pragma once
#include "Node.h"
#include "Node.cpp"
#include <new>

using namespace std;
template<class T>
class LinkedLists
{
public:
	LinkedLists();
	~LinkedLists();
	void getNewNode(T);
	void printList();
	void reversePrint();
	void retrieve(int);
	void addToFront(T);
	void addToBack(T);
	void removeFromBack();
	void removeFromFront();
	bool isEmpty();

	
private:
	//Holds the data when creating a new node
	T data;
	//Must not move, beginning of the linked list
	Node<T> *head;
};

