#pragma once
#include <iostream>
#include <iomanip>
#include <compare>


using namespace std;

class Energy
{
private:
    double value = 0;

public:
    Energy() : value(0) {}

    Energy(double value)
    {
        this->value = value;
        if (value <= 0) this->value = 0;
    }

    Energy(const Energy& a) : value(a.value) {}

    ~Energy() {}

    double get() const
    {
        return value;
    }

    void set(double value)
    {
        this->value = value;
    }

    Energy operator+(const Energy& a)
    {
        this->set(value + a.get());
        return *this;
    }

    Energy operator-(double a)
    {
        this->set(value - a);
        return *this;
    }

    Energy operator/(double a)
    {
        if (a == 0) 
            a = 1;
        return Energy(value / a);
    }

    Energy& operator=(const Energy& a)
    {
        this->set(a.get());
        return *this;
    }

};
