#pragma once
#include <iostream>

using namespace std;

namespace GAM345
{
	template <class T>
	class LinkedList
	{
	public:
		class Node
		{
		public:
			T data;
			Node* next;
			Node* prev;
		};
		T insert(T value, int index) //Insert the given element at the given position. Index 0 should insert the element at the beginning of the list, index 1 should be the second item in the list, etc.
		{
			if (head == nullptr)
			{
				Node* newNode = new Node();
				newNode->data = value;
				head = newNode;
				Lsize++;
			}
			else if (head != nullptr)
			{
				Node* newNode = new Node();
				newNode->data = value;
				Node* next = nullptr;
				Node* temp = head;
				/*while (temp->next != nullptr)
				{
					//cout << temp->data << endl; (for some reason this did not work no idea why?)
					temp = temp->next;
				}
				temp->next = newNode;*/
				Lsize++;
			}
			return value;
		}
		int erase(int index) //Erase the element at the given index
		{
			Node* temp = head;
			if (eraseB == true)
			{
				for (size_t i = 0; i < index; i++)
				{
					temp = temp->next;
				}
				eraseB = false;
			}
			if (eraseB == false)
			{
				delete[] temp;
				Lsize--;
				eraseB = true;
				return 0;
			}
		}
		int operator[](int index) //Return a reference to the element at the given index
		{
			Node* temp = head;
			for (size_t i = 0; i < index; i++)
			{
				temp = temp.next;
			}
			return index;
		}
		void clear() //Remove all elements from the list
		{
			Node* temp = head;
			while (temp != nullptr)
			{
				delete[] temp;
				Node* temp = head;
				temp = temp->next;
				head->next;
			}
		}
		int size() //Return the size of the linked list
		{
			Node* temp = head;
			while (temp != nullptr && eraseB == false)
			{
				if (temp != nullptr)
				{
					temp = temp->next;
					Lsize++;
				}
			}
			std::cout << "The Linked List is " << Lsize << " Nodes Long." << endl;
			return 0;
		}
	private:
		Node* head = nullptr;
		Node* temp;
		int Lsize;
		int Nsize;
		bool eraseB = true;
	};
}
