#include "stdafx.h"
#include "Node.h"

template<class T>
Node<T>::Node()
{
	next = nullptr;
}


template<class T>
Node<T>::~Node()
{
}


template<class T>
Node<T>* Node<T>::getNext()
{
	return next;
}

template<class T>
void Node<T>::setNext(Node<T> *link)
{
	next = link;
}

template<class T>
T Node<T>::getData()
{
	return data;
}


template<class T>
void Node<T>::setData(T dat)
{
	data = dat;
}