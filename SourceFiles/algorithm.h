#ifndef ALGORITHM_H
#define ALGORITHM_H
#include "iterator.h"

class Algorithm {
public:
    //Функция, обменивающая значения объектов,
    //на которые указывают два итератора
    template <class T>
    static void swapIterators(Iterator<T>& itr1, Iterator<T>& itr2);

    //Функция сортировки контейнера пузырьком
    template <class T>
    static void sort(Iterator<T> first, Iterator<T> last);
};

#endif // ALGORITHM_H
