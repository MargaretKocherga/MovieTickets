#ifndef ITERATOR_H
#define ITERATOR_H
#include "constiterator.h"
#include "Node.h"

template <class T>
class Queue;

template <class T>
class Iterator: public ConstIterator<T> {
public:
    //Конструктор класса Iterator
    Iterator();
    //Оператор * возвращает изменяемую ссылку на
    //данные в текущем узле
    T& operator*();
    //Оператор * возвращает ссылку на элемент
    const T& operator*() const;
    //Перегрузка префиксного инкремента
    Iterator<T>& operator++();
    //Перегрузка постфиксного инкремента
    Iterator<T> operator++(int);
    //Перегрузки операторов сравнения инераторов
    bool operator>(const Iterator<T> itr);
    bool operator<(const Iterator<T> itr);
protected:
    //Защищенный конструктор класса Iterator
    Iterator( Node<T>* ptr);
    //Дружественный класс Queue<T>
    friend class Queue<T>;
};

#endif // ITERATOR_H
