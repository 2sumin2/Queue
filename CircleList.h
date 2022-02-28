#include "CNode.h"
#include <string>

using namespace std;

class CircleList {
public:
	CircleList();
	~CircleList();
	bool empty() const;
	const Elem& front() const;
	const Elem& back() const;
	void advance();
	void add(const Elem& e);
	void remove();
private:
	CNode* cursor;
};