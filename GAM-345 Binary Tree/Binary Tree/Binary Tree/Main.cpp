#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main(int argc, char* argv[])
{
	Binarytree* tree = new Binarytree();

	tree->insert(1);
	tree->insert(2);
	tree->insert(3);
	tree->insert(4);
	tree->insert(5);
	tree->insert(6);
	tree->insert(7);
	tree->Contains(3);
	tree->Contains(8);
	tree->InOrderPrint();
	return 0;
}