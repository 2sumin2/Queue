#include "CircleList.h"
#include <string>

using namespace std;
typedef string Elem;

class LinkedQueue {
public:
	LinkedQueue();
	int size() const;
	bool empty() const;
	const Elem& front() const;
	void enqueue(const Elem& e);
	void dequeue();
private:
	CircleList C;
	int n;
};