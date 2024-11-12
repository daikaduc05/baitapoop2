#ifndef LINKLIST_H
#define LINKLIST_H

#include <list>
#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
class LinkList {
private:
    list<T> data;

public:
    void add(const T& item) {
        data.push_back(item);
    }

    void remove(const T& item) {
        data.remove(item);
    }

    typename list<T>::iterator find(const T& item) {
        return std::find(data.begin(), data.end(), item);
    }

    void display() const {
        for (const auto& item : data) {
            cout << item << endl;
        }
    }

    T& operator[](int index) {
        if (index < 0 || index >= data.size()) {
            throw out_of_range("Index out of range");
        }
        auto it = data.begin();
        advance(it, index);
        return *it;
    }

    const T& operator[](int index) const {
        if (index < 0 || index >= data.size()) {
            throw out_of_range("Index out of range");
        }
        auto it = data.begin();
        advance(it, index);
        return *it;
    }

    size_t size() const {
        return data.size();
    }
};

#endif
