#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <stdexcept> // Thư viện để sử dụng ngoại lệ
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d = 1, int m = 1, int y = 1900) : day(d), month(m), year(y) {
        if (year < 1900) {
            throw invalid_argument("Nam phai lon hon hoac bang 1900.");
        }
    }

    bool operator==(const Date& other) const {
        return day == other.day && month == other.month && year == other.year;
    }

    bool operator!=(const Date& other) const {
        return !(*this == other);
    }

    bool operator<(const Date& other) const {
        if (year != other.year) return year < other.year;
        if (month != other.month) return month < other.month;
        return day < other.day;
    }

    bool operator>(const Date& other) const {
        return other < *this;
    }

    Date& operator=(const Date& other) {
        if (this != &other) {
            day = other.day;
            month = other.month;
            year = other.year;
        }
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Date& date) {
        os << date.day << "/" << date.month << "/" << date.year;
        return os;
    }

    friend istream& operator>>(istream& is, Date& date) {
        char separator;
        is >> date.day >> separator >> date.month >> separator >> date.year;
        if (date.year < 1900) {
            throw invalid_argument("Nam phai lon hon hoac bang 1900.");
        }
        return is;
    }
};

#endif
