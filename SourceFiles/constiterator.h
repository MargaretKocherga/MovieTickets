#ifndef CONSTITERATOR_H
#define CONSTITERATOR_H
#include "Node.h"

template <class T>
class Queue;

template <class T>
class ConstIterator {
public:
    //Конструктор класса ConstIterator
    ConstIterator();
    //Оператор * возвращает ссылку на элемент
    const T& operator*() const;
    //Перегрузка операторов сравнения
    bool operator==(const ConstIterator& itr) const;
    bool operator!=(const ConstIterator& itr) const;
    //Перегрузка префиксного инкремента
    ConstIterator& operator++();
    //Перегрузка постфиксного инкремента
    ConstIterator operator++(int);
protected:
    //Указатель на текущий узел
    Node<T>* current;
    //Защищенный конструктор
    ConstIterator(Node<T>* ptr);
    //Дружественный класс Queue<T>
    friend class Queue<T>;
};

#endif // CONSTITERATOR_H
