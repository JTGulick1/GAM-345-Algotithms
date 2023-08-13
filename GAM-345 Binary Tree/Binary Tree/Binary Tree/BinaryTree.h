#pragma once
#include <iostream>
using namespace std;

struct BTreeNode
{
	BTreeNode* left;
	BTreeNode* right;
	int value;
};
class Binarytree
{
public:
	Binarytree();
	~Binarytree();
	void insert(int aValue);
	bool Contains(int aValue);
	void InOrderPrint();

private:
	void insert(int aValue, BTreeNode* leaf);//Insert Priv
	bool Contains(int aValue, BTreeNode* leaf);//Contains Priv
	void destroy_tree(BTreeNode* leaf);//Destroy Priv
	void InOrderPrint(BTreeNode* leaf);//Print Priv
	//I added Priv functions to the main functions because I needed a way to access the Tree Nodes in the Main.cpp
	BTreeNode* mRoot;
};
Binarytree::Binarytree()
{
	mRoot = NULL;
}
inline Binarytree::~Binarytree()
{
	destroy_tree(mRoot);
}
inline bool Binarytree::Contains(int aValue)
{
	return Contains(aValue, mRoot);
}
inline void Binarytree::insert(int aValue)
{
	if (mRoot != NULL)
	{
		insert(aValue, mRoot);
	}
	else
	{
		mRoot = new BTreeNode;
		mRoot->value = aValue;
		mRoot->left = NULL;
		mRoot->right = NULL;
	}
}
inline void Binarytree::InOrderPrint()
{
	InOrderPrint(mRoot);
	cout << "\n";
}
inline void Binarytree::destroy_tree(BTreeNode* leaf)
{
	if (leaf != NULL) //delete everything
	{
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}
inline void Binarytree::insert(int aValue, BTreeNode* leaf)
{
	if (aValue < leaf->value) 
	{
		if (leaf->left != NULL) 
		{
			insert(aValue, leaf->left);
		}
		else 
		{
			leaf->left = new BTreeNode;
			leaf->left->value = aValue;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
		}
	}
	else if (aValue >= leaf->value) 
	{
		if (leaf->right != NULL)
		{
			insert(aValue, leaf->right);
		}
		else 
		{
			leaf->right = new BTreeNode;
			leaf->right->value = aValue;
			leaf->right->right = NULL;
			leaf->right->left = NULL;
		}
	}
}
inline bool Binarytree::Contains(int aValue, BTreeNode* leaf)
{
	if (leaf != NULL) {
		if (aValue == leaf->value) {
			cout << leaf << "Is in the Tree" << endl;
			return leaf;
		}
		if (aValue < leaf->value) {
			return Contains(aValue, leaf->left);
		}
		else {
			return Contains(aValue, leaf->right);
		}
	}
	else {
		cout << leaf << "Is not in the Tree" << endl;
		return NULL;
	}
}
inline void Binarytree::InOrderPrint(BTreeNode* leaf)
{
	if (leaf != NULL) {
		InOrderPrint(leaf->left);
		cout << leaf->value << ",";
		InOrderPrint(leaf->right);
	}
}
