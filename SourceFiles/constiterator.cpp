#include "constiterator.h"
#include "exception.h"

//Конструктор класса ConstIterator
template <class T>
ConstIterator<T>::ConstIterator()
{
    current = nullptr;
}

//Защищенный конструктор
template <class T>
ConstIterator<T>::ConstIterator(Node<T>* ptr)
{
    current = ptr;
}

//Оператор * возвращает ссылку на элемент
template <class T>
const T& ConstIterator<T>::operator*() const
{
    if (!current) throw Exception();
    return current->data;
}

//Перегрузка оператора сравнения
template <class T>
bool ConstIterator<T>::operator==(const ConstIterator& itr) const
{
    return (current == itr.current);
}

//Перегрузка оператора сравнения
template <class T>
bool ConstIterator<T>::operator!=(const ConstIterator& itr) const
{
    return (current != itr.current);
}

//Перегрузка префиксного инкремента
template <class T>
ConstIterator<T>& ConstIterator<T>::operator++()
{
    current = current->next;
    return *this;
}

//Перегрузка постфиксного инкремента
template <class T>
ConstIterator<T> ConstIterator<T>::operator++(int)
{
    ConstIterator<T> copy = *this;
    current = current->next;
    return copy;
}
