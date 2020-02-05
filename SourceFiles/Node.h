#ifndef NODE_H
#define NODE_H

#include <iostream>

template <class T>
struct Node {
    //Информация об объекте
    T data;
    //Указатель на следующий элемент очереди
    Node* next;
    //Конструктор структуры Node
    Node(const T& _data = T{}, Node* _next = nullptr) :
        data{ _data }, next{ _next } {}
};

#endif // NODE_H
