#pragma once
#include <iostream>
#include <iomanip>
#include <compare>


using namespace std;

class Mass
{
private:
    double value = 0;

public:
    Mass() : value(0) {}

    Mass(double value)
    {
        this->value = value;
        if (value <= 0) this->value = 0;
    }

    Mass(const Mass& a) : value(a.value) {}

    ~Mass() {}

    double get() const
    {
        return value;
    }

    void set(double value)
    {
        this->value = value;
    }

    Mass operator+(const Mass& a) const
    {
        return Mass(value + a.value);
    }

    Mass operator-(double a)
    {
        this->set(value - a);
        return *this;
    }

    Mass operator/(double a)
    {
        if (a == 0) a = 1;
        return *(new Mass(value / a));
    }

    Mass& operator=(const Mass& a)
    {
        this->set(a.get());
        return *this;
    }

};
