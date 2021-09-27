#pragma once
#include <iostream>
#include <iomanip>
#include <compare> 
#include "Vector.h"
using namespace std;

class Force : public Vector
{
public:
	Force() {};

	Force(double a, double b, double c)
	{
		this->setX(a);
		this->setY(b);
		this->setZ(c);
	}

	Force(const Force& v)
	{
		this->setX(v.getX());
		this->setY(v.getY());
		this->setZ(v.getZ());
	}

	~Force() {};

	Force operator+(const Force& v)
	{
		x += v.getX();
		y += v.getY();
		z += v.getZ();
	}

	Force operator-(const Force& v)
	{
		x -= v.getX();
		y -= v.getY();
		z -= v.getZ();
	}

	Force& operator=(const Force& v)
	{
		this->setX(v.getX());
		this->setY(v.getY());
		this->setZ(v.getZ());

		return *this;
	}
};

//Force operator "" N(double long a) {
//	return *(new Force());
//}