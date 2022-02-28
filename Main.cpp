#include "LinkedQueue.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int main(void) {
	LinkedQueue* que = new LinkedQueue();

	que->enqueue("5");
	que->enqueue("3");

	cout << que->front() << endl;
	cout << que->size() << endl;

	que->dequeue();
	que->enqueue("7");
	que->dequeue();

	cout << que->front() << endl;

	que->dequeue();
	que->dequeue();

	//cout << que->empty() << endl;
	if (que->empty() == 1 ) 
		cout << "True" << endl;
	else
		cout << "False" << endl;

} 