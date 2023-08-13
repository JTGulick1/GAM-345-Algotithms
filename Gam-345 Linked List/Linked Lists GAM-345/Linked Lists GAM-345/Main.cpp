#include <iostream>
#include "GAM345LinkedList.h"

using namespace std;
using namespace GAM345;

// A test element
class TestElement
{
public:
	TestElement() { elementId = ++lastElementId; }
	int elementId;
private:
	static int lastElementId;
};
int TestElement::lastElementId = 0;

int main(int argc, char** argv)
{
	GAM345::LinkedList<TestElement> linked;
	TestElement newElement;
	linked.insert(newElement, 0);
	linked.insert(newElement, 1);
	linked.insert(newElement, 2);
	linked.erase(1);
	linked.size();
	linked.insert(newElement, 4);
	//linked.clear();
	linked.size();

	return 0;
}