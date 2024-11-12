#include "Date.h"

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {
    if (year < 1900) year = 1900;
}

bool Date::operator==(const Date& other) const {
    return day == other.day && month == other.month && year == other.year;
}

std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << date.day << "/" << date.month << "/" << date.year;
    return os;
}
