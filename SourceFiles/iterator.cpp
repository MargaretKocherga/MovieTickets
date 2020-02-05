#include "iterator.h"
#include "exception.h"

//Конструктор класса Iterator
template <class T>
Iterator<T>::Iterator()
{}

//Защищенный конструктор
template <class T>
Iterator<T>::Iterator(Node<T>* ptr): ConstIterator<T>(ptr)
{}

//Перегрузка префиксного инкремента
template <class T>
Iterator<T>& Iterator<T>::operator++()
{
    this->current = this->current->next;
    if (!this->current) throw Exception();
    return *this;
}

//Перегрузка постфиксного инкремента
template <class T>
Iterator<T> Iterator<T>::operator++(int)
{
    Iterator<T> copy = *this;
    this->current = this->current->next;
    if (!this->current) throw Exception();
    return copy;
}

//Перегрузки оператора сравнения инераторов
template <class T>
bool Iterator<T>::operator>(const Iterator<T> itr)
{
    Node<T>* ptr = itr.current;
    while (ptr != this->current && ptr->next)
        ptr = ptr->next;
    if (ptr->next)
        return false;
    else
        return true;
}

//Перегрузки оператора сравнения инераторов
template <class T>
bool Iterator<T>::operator<(const Iterator<T> itr)
{   //Использование предыдущей перегрузки
    if ((*this) > itr)
        return false;
    else
        return true;
}

//Оператор * возвращает изменяемую ссылку на
//данные в текущем узле
template <class T>
T& Iterator<T>::operator*()
{
    if (!this->current) throw Exception();
    return this->current->data;
}

//Оператор * возвращает ссылку на элемент
template <class T>
const T& Iterator<T>::operator*() const
{
    if (!this->current) throw Exception();
    return this->current->data;
}
