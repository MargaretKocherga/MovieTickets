#include "queue.h"
#include <QMessageBox>

//Конструктор по умолчанию класса Queue
template<class T>
Queue<T>::Queue()
{
    size = 0;
    first = new Node<T>();
    last = new Node<T>();
    first = last = nullptr;
}

//Конструктор с параметром класса Queue
template<class T>
Queue<T>::Queue(const Queue& obj)
{
    size = 0;
    first = new Node<T>();
    last = first;
    first = last = nullptr;
    if (obj.size == 0) return;

    Node<T>* temp = obj.first;
    while (temp != nullptr)
    {
        push(temp->data);
        temp = temp->next;
    }
}

//Деструктор класса Queue
template<class T>
Queue<T>::~Queue()
{
    eraseAll();
}

//Получение размера
template<class T>
int Queue<T>::getSize()
{
    return size;
}

//Получение значения первого элемента
template<class T>
T Queue<T>::getFirst()
{
    return first->data;
}

//Получение значения последнего элемента
template<class T>
T Queue<T>::getLast()
{
    return last->data;
}

//Добавление элемента в конец очереди
template<class T>
void Queue<T>::push(const T& value)
{
    Node<T>* temp = new Node<T>;
    temp->data = value;

    if (size == 0)
    {
        first = temp;
        last = first;
    }
    else
    {
        last->next = temp;
        last = temp;
    }
    size++;
}

//Удаление элемента с начала очереди
template<class T>
void Queue<T>::pop()
{
    if (first == nullptr)
    {
        return;
    }

    Node<T>* temp = first;
    first = first->next;
    delete temp;
    size--;
}

//Проверка, пуста ли очередь
template<class T>
bool Queue<T>::isEmpty()
{
    return (size == 0);
}

//Удаление всех элементов очереди
template<class T>
void Queue<T>::eraseAll()
{

    while (first != nullptr)
        pop();
}

//Перегрузка операции присваивания
template<class T>
const Queue<T>& Queue<T>::operator=(const Queue<T>& obj)
{
    Queue<T> copy(obj);
    this->swap(copy);
    return *this;
}

//Получение элемента по индексу
template <class T>
T& Queue<T>::operator[](int index)
{

        Node<T>* temp = first;

        for (int i = 0; i < index; ++i)
            temp = temp->next;

        return temp->data;
}

//Удаление элемента по индексу
template <class T>
void Queue<T>::eraseByIndex(int index)
{
    Node<T>* temp = first;
    //Удаление нулевого элемента
    if (index == 0)
    {
        temp = first;
        first = first->next;
        delete temp;
    }
    else
    {   //Удаление ненулевого элемента
        for (int i = 0; i < index - 1; ++i)
            temp = temp->next;
        Node<T>* deleteTemp = temp->next;
        temp->next = temp->next->next;
        delete deleteTemp;
    }
    size--;
}

//Функция, обменивающая значения объектов
template <class T>
void Queue<T>::swap(Queue<T>& obj)
{
    std::swap(first, obj.first);
    std::swap(last, obj.last);
    std::swap(size, obj.size);
}

//Итератор на начало очереди
template<class T>
Iterator<T> Queue<T>::begin()
{
    Iterator<T> itr{ first };
    return itr;
}

//Константный итератор на начало очереди
template<class T>
ConstIterator<T> Queue<T>::begin() const
{
    if (!isEmpty())
    {
        ConstIterator<T> constItr{ first };
        return constItr;
    }
}

//Итератор на конец очереди
template<class T>
Iterator<T> Queue<T>::end()
{
    Iterator<T> itr{ last };
    return itr;
}

//Константный итератор на конец очереди
template<class T>
ConstIterator<T> Queue<T>::end() const
{
    ConstIterator<T> constItr{ last };
    return constItr;
}
