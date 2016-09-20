#include <iostream>
#include "list.h"
/**
 * makes a head and tail, sets default values to head and tail
 * @return 0
 */
template <class T>
List<T>::List()
{
    head = new Node<T>(0);
    tail = new Node<T>(0);
    head->SetNext(tail);
    head->SetPrev(nullptr);

    tail->SetPrev(head);
    tail->SetNext(nullptr);
}
/**
 * Places the new node between the last node and the tail
 * @param value = the value the node is gonna have
 * @return 0
 */
template <class T>
void List<T>::push_back(T value)
{
    Node<T> *p = new Node<T>(value);
    Node<T> *current;

    //Is there a node in the list? if not place node between head and tail
    if(head->GetNext == nullptr)
    {
        p->SetPrev(head); //new node prev = head
        p->SetNext(tail); //new node next = tail

        head->SetNext(p); //head next = p
        tail->SetPrev(p); //tail prev = p
    }
    //There is a node in list
    else
    {
        //Iterate through list to get the last node before tail
        Node<T> *next = current->GetNext();
        while(next->GetNext != tail)
        {
            current = next;
            next = next->GetNext();
        }

        p->SetPrev(tail->GetPrev()); //new node prev = tail prev
        p->SetNext(tail); //new node next = tail

        current->SetNext(p); //Tails previous next = new node
        tail->SetPrev(p); //tail prev = new node
    }
}
/*
template <class T>
List::remove(T delValue)
{
    //må ha en while løkke som teller for å finne den ønskede indexen
}*/
/**
 * prints the whole list
 */
template <class T>
void List<T>::PrintList()
{
    Node<T> *temp = head->GetNext();
    while(temp->GetNext())
    {
        std::cout << temp->GetData() << std::endl;
        temp = temp->GetNext();
        temp->SetNext(temp);
    }
}