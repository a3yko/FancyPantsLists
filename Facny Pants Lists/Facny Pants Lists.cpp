// Facny Pants Lists.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Node.h"
#include "LinkedLists.h"
#include "LinkedLists.cpp"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	LinkedLists<int> one;
	one.getNewNode(1);
	one.getNewNode(2);
	one.getNewNode(3);
	if (!one.isEmpty())
	{
		one.printList();
		one.reversePrint();
	}
	
	system("pause");
	return 0;
}

