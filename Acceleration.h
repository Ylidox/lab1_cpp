#pragma once
#include <iostream>
#include <iomanip>
#include <compare> 
#include "Vector.h"
using namespace std;

class Acceleration : public Vector
{
public:
	Acceleration() {};

	Acceleration(double a, double b, double c)
	{
		this->setX(a);
		this->setY(b);
		this->setZ(c);
	}

	Acceleration(const Acceleration& v)
	{
		this->setX(v.getX());
		this->setY(v.getY());
		this->setZ(v.getZ());
	}

	~Acceleration() {};

	Acceleration operator+(const Acceleration& v)
	{
		x += v.getX();
		y += v.getY();
		z += v.getZ();
	}

	Acceleration operator-(const Acceleration& v)
	{
		x -= v.getX();
		y -= v.getY();
		z -= v.getZ();
	}

	Acceleration operator/(double a) {
		if (a == 0) a = 0.1;
		return *(new Acceleration(this->getX() / a, this->getY() / a, this->getZ() / a));
	} 

	Acceleration& operator=(const Acceleration& v)
	{
		this->setX(v.getX());
		this->setY(v.getY());
		this->setZ(v.getZ());

		return *this;
	}
};

//Acceleration* operator "" mps(double long a) {
//	return new Acceleration(a);
//}	