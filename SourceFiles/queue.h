#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"
#include "iterator.h"
#include "constiterator.h"

template <class T>
class Queue {
    int size;       //Количество элементов очереди
    Node<T>* first; //Указатель на первый элемент очереди
    Node<T>* last;  //Указатель на последний элемент очереди
public:
    //Конструктор по умолчанию класса Queue
    Queue();
    //Конструктор с параметром класса Queue
    Queue(const Queue& obj);
    //Деструктор класса Queue
    ~Queue();
    //Функции получения значений полей класса
    int getSize();
    T getFirst();
    T getLast();
    //Добавление элемента в конец очереди
    void push(const T& value);
    //Удаление элемента с начала очереди
    void pop();
    //Проверка, пуста ли очередь
    bool isEmpty();
    //Очистка очереди
    void eraseAll();
    //Удаление элемента по индексу
    void eraseByIndex(int index);
    //Функция, обменивающая значения объектов
    void swap(Queue<T>& obj);
    //Итератор на начало очереди
    Iterator<T> begin();
    ConstIterator<T> begin() const;
    //Итератор на конец очереди
    Iterator<T> end();
    ConstIterator<T> end() const;
    //Перегрузка оператора присваивания
    const Queue<T>& operator=(const Queue<T>& obj);
    //Получение элемента по индексу
    T& operator[](int index);
    //Перегрузка операторов сравнения
    inline friend bool operator==(const Queue<T>& obj1,
                                  const Queue<T>& obj2) {
        if (obj1.size != obj2.size) return false;

        Node<T>* element1 = obj1.first;
        Node<T>* element2 = obj2.first;

        //Сравнение значений всех элементов двух очередей
        while (element1 != nullptr) {
            if (element1->data != element2->data)
                return false;
            element1 = element1->next;
            element2 = element2->next;
        }

        return true;
    }

    inline friend bool operator!=(const Queue<T>& obj1,
                                  const Queue<T>& obj2) {
        return !(obj1 == obj2);
    }

};

#endif // QUEUE_H
