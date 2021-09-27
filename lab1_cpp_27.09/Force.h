#pragma once
#include <iostream>
#include <iomanip>
#include <compare> 
#include "Vector.h"
using namespace std;

class Force : public Vector
{
public:
	Force()
	{
		this->setX(0);
		this->setY(0);
		this->setZ(0);
	}

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
		return *this;
	}

	Force operator-(const Force& v)
	{
		x -= v.getX();
		y -= v.getY();
		z -= v.getZ();
		return *this;
	}

	Force& operator=(const Force& v)
	{
		this->setX(v.getX());
		this->setY(v.getY());
		this->setZ(v.getZ());

		return *this;
	}
};
