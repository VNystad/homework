#include <iostream>
#include "node.h"

template <class T>
Node<T>::Node(T data)
{
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
}

template <class T> T Node<T>::GetData()
{
    return this->data;
}

template <class T> void Node<T>::SetNext(Node<T> *next)
{
    this->next = next;
}

template <class T> Node<T> *Node<T>::GetNext()
{
    return this->next;
}

template <class T> void Node<T>::SetPrev(Node<T> *prev)
{
    this->prev = prev;
}

template <class T> Node<T> *Node<T>::GetPrev()
{
    return this->prev;
}

template <class T> void Node<T>::Print()
{
    std::cout << data << std::endl;
}


