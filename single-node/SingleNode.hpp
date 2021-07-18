#pragma once
#include <stdlib.h>
template <typename T> class SingleNode {
	
	public:
	
	T data;
	SingleNode<T> *next;

	SingleNode();
	SingleNode(T);
};