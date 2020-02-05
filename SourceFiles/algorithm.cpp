#include "algorithm.h"
#include "iterator.cpp"
#include "constiterator.cpp"

//Функция, обменивающая значения объектов,
//на которые указывают два итератора
template <class T>
void Algorithm::swapIterators(Iterator<T>& itr1, Iterator<T>& itr2)
{
    T temp = (*itr1);
    (*itr1) = (*itr2);
    (*itr2) = temp;
}

//Функция сортировки контейнера пузырьком
template <class T>
void Algorithm::sort(Iterator<T> first, Iterator<T> last)
{
    Iterator<T> i, j, k;

    for (i = first; i != last; i++)
        for (j = first, k = j; j != last; j++) {
            ++k;
            //Если значение по j > значения по k
            if (*j > *k)
                //Вызов функции обмена значений
                Algorithm::swapIterators(j, k);
        }
}
