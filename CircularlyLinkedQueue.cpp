#include "LinkedQueue.h"
#include <iostream>

LinkedQueue::LinkedQueue()
	: C(), n(0) { }

int LinkedQueue::size() const
{
	return n;
}

bool LinkedQueue::empty() const
{
	return n == 0;
}

const Elem& LinkedQueue::front() const {
	if (empty()) cout << "front of empty queue" << endl ;
	return C.front();
}

void LinkedQueue::enqueue(const Elem& e) {
	C.add(e);
	C.advance();
	n++;
}

void LinkedQueue::dequeue() {
	if (empty()) cout << "dequeue of empty queue" << endl ;
	else {
		C.remove();
		n--;
	}
}


