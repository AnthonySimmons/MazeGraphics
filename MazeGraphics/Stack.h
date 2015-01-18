#ifndef STACK_H
#define STACK_H

#include "Maze.h"

template <typename Comparable>
class Stack
{
public:
	struct Node
	{
		Node* next;
		Comparable data;
	};
	Stack()
	{
		top = NULL;
	}

	void push(Comparable x)
	{
		Node* newTop = new Node;
		newTop->data = x;
		newTop->next = top;
		top = newTop;
	}

	Comparable pop()
	{
		Comparable tmp = top->data;
		top = top->next;
		return tmp;
	}

	bool isEmpty() const
	{
		return top == NULL;
	}

private:
	Node* top;
};


#endif