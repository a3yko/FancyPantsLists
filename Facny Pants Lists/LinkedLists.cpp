#include "stdafx.h"
#include "LinkedLists.h"
#include <iostream>
#include "Node.h"

using namespace std;


template< class T >
LinkedLists<T>::LinkedLists()
{
}


template<class T>
LinkedLists<T>::~LinkedLists()
{
}


//Function Checks if the linked list is empty
//There is no prerequisites
template<class T>
bool LinkedLists<T>::isEmpty()
{
	if (head->getNext() == nullptr)
		return true;
	
		return false;
}


//Creates a new node at the front of the list
//a linked list must exist
template<class T>
void LinkedLists<T>::getNewNode(T data)
{
		Node<T> *temptr = new Node<T>;
		temptr->setData(data);
		temptr->setNext(head);
		head = temptr;
}


//Adds a new node to the front of the linked list
//A linked list must exist
template<class T>
void LinkedLists<T>::addToFront(T data)
{
	Node<T> *temptr = new Node<T>;
	temptr->setData(data);
	temptr->setNext(head);
	head = temptr;
	delete temptr;
}


//Adds a new node to the back of the linked list
//A linked list must exist
template<class T> 
void LinkedLists<T>::addToBack(T data)
{
	Node<T> *travel = head;
	while (travel->getData() != data)
	{
		if (travel->getNext() == nullptr)
		{
			Node<T> *temptr = new Node < T > ;
			temptr->setData(data);
			temptr->setNext(head);
			travel = temptr;
		}
		else
			travel = travel->getNext();
	}
		
}


//outputs the data at the given position in the linked list
//Prereq: A linked list must already exist and have Nodes linked
template<class T>
void LinkedLists<T>::retrieve(int element)
{
	Node<T> *temptr = head;
	int count = 0;
	while (count < element)
	{
		temptr->getNext();
		count++;
	}
	cout << temptr->getData() << endl;
	delete temptr;
}


//Removes a Node from the back of the linked list
//Prereq: A linked list must already exist have Nodes linked
template<class T>
void LinkedLists<T>::removeFromBack()
{

}


//Removes a Node from the front of the linked list
//Prereq: A linked list must already exist and have Nodes linked
template<class T>
void LinkedLists<T>::removeFromFront()
{
	Node<T> *temp = head;
	temp->getNext();
	head = temp;
	delete temp; 
}


//Prints the linked list
//Prereq: A linked list must already exist and have the Nodes linked
template<class T>
void LinkedLists<T>::printList()
{
	Node<T> *temp = head;

	if (head != nullptr)
	{
		while (temp->getNext() != nullptr)
		{
			cout << temp->getData() << endl;
			temp = temp->getNext();
		}
		cout << temp->getData() << endl;
	}

	delete temp;
}


//Prints the list in reverse
//Prereq: A linked list must alraedy exist and have the Nodes linked
template<class T>
void LinkedLists<T>::reversePrint()
{
	Node<T> *trvl = head;
	Node<T> *front = trvl;
	Node<T> *travel = front->getNext();
	Node<T> *back = travel->getNext();

	front->setNext(nullptr);
	while (back != nullptr)
	{
		travel->setNext(front);
		front = travel;
		travel = back;
		back = back->getNext();
	}
	travel->setNext(front);
	trvl = travel;
	cout << trvl->getData() << endl;
}