#pragma once
#include <iostream>
#include <iomanip>
#include "Vector.h"
using namespace std;

class Impulse : public Vector
{
public:
	Impulse() {};

	Impulse(double a, double b, double c)
	{
		this->setX(a);
		this->setY(b);
		this->setZ(c);
	}

	Impulse(const Impulse& v)
	{
		this->setX(v.getX());
		this->setY(v.getY());
		this->setZ(v.getZ());
	}

	~Impulse() {};

	Impulse operator+(const Impulse& v)
	{
		x += v.getX();
		y += v.getY();
		z += v.getZ();
	}

	Impulse operator-(const Impulse& v)
	{
		x -= v.getX();
		y -= v.getY();
		z -= v.getZ();
	}

	Impulse& operator=(const Impulse& v)
	{
		this->setX(v.getX());
		this->setY(v.getY());
		this->setZ(v.getZ());

		return *this;
	}
};