#pragma once
template <class T>
class Node
{
public:
	Node();
	~Node();

	Node<T>* getNext();
	void setData(T);
	T getData();

private:
	T data;
	Node<T> *next;
};

