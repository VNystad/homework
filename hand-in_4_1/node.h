#ifndef HAND_IN_4_1_NODE_H
#define HAND_IN_4_1_NODE_H


template<class T>
class Node
{
public:
    Node(T data);
    T GetData();
    void SetNext(Node<T> *next);
    Node<T> *GetNext();
    void SetPrev(Node<T> *prev);
    Node<T> *GetPrev();
    void Print();

protected:

    T data;
    Node<T> *next;
    Node<T> *prev;
};


#endif //HAND_IN_4_1_NODE_H
