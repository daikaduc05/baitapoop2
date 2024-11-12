#include "LinkList.h"
#include <iostream>

template <typename T>
void LinkList<T>::add(const T& item) {
    data.push_back(item);
}

template <typename T>
void LinkList<T>::remove(const T& item) {
    data.remove(item);
}

template <typename T>
typename std::list<T>::iterator LinkList<T>::find(const T& item) {
    return std::find(data.begin(), data.end(), item);
}

template <typename T>
void LinkList<T>::display() const {
    for (const auto& item : data) {
        std::cout << item << std::endl;
    }
}
