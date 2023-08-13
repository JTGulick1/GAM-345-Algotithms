#pragma once
#include<iostream>
#include <list>
#include "Node.h"

using namespace std;

class Graph
{
    int value;
    list<int>* List;
    Node node;
public:
    Graph(int aValue) {
        this->value = aValue;
        List = new list<int>[aValue];
    }

    void addNumber(int aValue, int link) {
        List[aValue].push_back(link);
    }

    void startNum(int start) {
        bool* visited = new bool[value];
        for (int i = 0; i < value; i++)
            visited[i] = false;

        list<int> queue;

        visited[start] = true;
        queue.push_back(start);

        list<int>::iterator i;

        while (!queue.empty())
        {
            start = queue.front();
            node.IntToString(start);
            queue.pop_front();


            for (i = List[start].begin(); i != List[start].end(); ++i)
            {
                if (!visited[*i])
                {
                    visited[*i] = true;
                    queue.push_back(*i);
                }
            }
        }
    }
};
