#ifndef LINKLIST_H
#define LINKLIST_H

#include <list>
#include <algorithm>

template <typename T>
class LinkList {
public:
    std::list<T> data;
    void add(const T& item);
    void remove(const T& item);
    typename std::list<T>::iterator find(const T& item);
    void display() const;
};

#include "LinkList.cpp" // Đưa vào cuối file tiêu đề để biên dịch template
#endif
