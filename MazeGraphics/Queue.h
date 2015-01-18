#ifndef QUEUE_H
#define QUEUE_H

#include "Maze.h"

template <typename Comparable>
class Queue
{
public:
	struct Node
	{
		Node* next;	
		Node* prev;
		Comparable data;
	};
	Queue()
	{
		front = NULL;
		back = NULL;
	}

	void pushBack(Comparable x)
	{
		Node* newBack = new Node;
		newBack->data = x;
		newBack->next = back;
		if(back != NULL)
		{
			back->prev = newBack;
		}
		back = newBack;
		if(front == NULL)
		{
			front = back;
		}
	}

	Comparable popFront()
	{
		if(front != NULL)
		{
			Comparable tmp = front->data;
			if(front != back)
			{
				front = front->prev;
			}
			else
			{
				front = NULL;
				back = NULL;
			}
			return tmp;
		}
	}

	bool isEmpty() const
	{
		return front == NULL;
	}
	
private:
	Node* front;
	Node* back;
};


#endif