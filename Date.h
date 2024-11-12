#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
private:
    int day, month, year;
public:
    Date(int d = 1, int m = 1, int y = 1900);
    bool operator==(const Date& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
};

#endif
