#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
namespace GAM345
{
	template <class T>
	class Vector
	{
	public:
		Vector()
		{
			aSize = 0;
			aCapacity = 10;
			increasedValue = 0;
			data = new int[aCapacity];
		};
		~Vector()
		{
			delete[]data;
		}
		void resize(int x)
		{
			aSize = x;
		}
		int size()
		{
			if (increasedValue == 0)
			{
				increasedValue++;
				counter++;
				return aSize;
			}
			if (counter == 72)
			{
				increasedValue = 2;
			}
			else
				counter++;
				return aSize;
		}
		void reserve(int x)
		{
			aCapacity += x;
		}
		void push_back(T)
		{
			increasedValue = 0;
			if (aCapacity = aSize)
			{
				aCapacity++;
			}
			if (aSize <= aCapacity)
			{
				std::cout << "Size: " << aSize <<std::endl;
				std::cout << "Cap: " << aCapacity << std::endl;
				std::cout << std::endl;
				aSize++;
			}
		}
		bool empty()
		{
			if (aSize >= 0)
			{
				std::cout << std::endl;
				std::cout << "Is Not Empty" << std::endl;
				std::cout << "Clearing..." << std::endl;
				std::cout << std::endl;
				aSize = 0;
			}
			if (aSize <= 0)
			{
				std::cout << "Size Is Empty" << std::endl;
				std::cout << std::endl;
				return true;
			}
		}
		int capacity()
		{
			std::cout << "Cap: " << aCapacity << std::endl;
			return aCapacity;
		}
		void remove(int x)
		{
			aSize - x;
		}
		void insert(T, int x)
		{
			std::cout << "Inserted Num: " << x << endl;
		}
		void clear()
		{
			aSize = 0;
			aCapacity = 10;
			increasedValue = 0;
			data = new int[aCapacity];
			std::cout << std::endl;
			std::cout << "Reseting..." << std::endl;
			std::cout << "Cap: " << aCapacity << std::endl;
			std::cout << "Size: " << aSize << std::endl;
		}
		T& operator[](int Index)
		{
			//Index += increasedValue;
			//for (int i = 0; i < size(); i++)
				//Index - Index;
			return Index;
		}

	private:
		int aSize;
		int increasedValue;
		int aCapacity;
		int counter;
		int* data;
	};
}

