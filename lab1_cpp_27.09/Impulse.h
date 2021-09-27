#pragma once
#include <iostream>
#include <iomanip>
#include "Vector.h"
using namespace std;

class Impulse : public Vector
{
public:
	Impulse()
	{
		this->setX(0);
		this->setY(0);
		this->setZ(0);
	}

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
		return *this;
	}

	Impulse operator-(const Impulse& v)
	{
		x -= v.getX();
		y -= v.getY();
		z -= v.getZ();
		return *this;
	}

	Impulse& operator=(const Impulse& v)
	{
		this->setX(v.getX());
		this->setY(v.getY());
		this->setZ(v.getZ());

		return *this;
	}
};