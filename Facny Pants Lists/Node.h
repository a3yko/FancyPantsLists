#pragma once
template <class T>
class Node
{
public:
	Node();
	~Node();

	Node<T>* getNext();
	void setNext(Node<T>*);
	void setData(T);
	T getData();

private:
	T data;
	Node<T> *next;
};

