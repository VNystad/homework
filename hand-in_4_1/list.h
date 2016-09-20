#ifndef HAND_IN_4_1_LIST_H
#define HAND_IN_4_1_LIST_H

#include "node.h"

template<class T>
class List
{
public: //This is where functions go

    List();

    void push_back(T value); //to add value to list
    void remove(T delValue); //remove value from list
    void PrintList(); // Print all values in list
    //std::size_t size();
    //T& operator[std::size_t position]

private:
    Node<T>* head; //Peker til head
    Node<T>* tail; //Peker til tail
};

#endif //HAND_IN_4_1_LIST_H
