//
// Created by moonlin on 01.03.2021.
// insertion sort: O(n) - O(n^2)

#ifndef MAIN_INSERTIONSORT_H
#define MAIN_INSERTIONSORT_H

template <class T>
void insetrionSort(T *dataStart, T *dataEnd, bool minToMax = true){
    for (T *data = dataStart+1; data <= dataEnd; ++data) {
        T *curr = data;
        while (*(curr-1) > *curr && curr != dataStart){
            T temp = *curr;
            *curr = *(curr-1);
            *(curr-1) = temp;
            curr--;
        }
    }
}

#endif //MAIN_INSERTIONSORT_H
