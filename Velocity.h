#pragma once
#include <iostream>
#include <iomanip>
#include <compare>
#include "Vector.h"
//#include "files.h"

using namespace std;

class Velocity : public Vector
{
public:
	Velocity() {}

	Velocity(double a, double b, double c)
	{
		this->setX(a);
		this->setY(b);
		this->setZ(c);
	}

	Velocity(const Velocity& v)
	{
		this->setX(v.getX());
		this->setY(v.getY());
		this->setZ(v.getZ());
	}

	~Velocity() {};

	Velocity operator+(const Velocity& v)
	{
		x += v.getX();
		y += v.getY();
		z += v.getZ();
		return *this;
	}

	Velocity operator-(const Velocity& v)
	{
		x -= v.getX();
		y -= v.getY();
		z -= v.getZ();
		return *this;
	}

	
	Velocity operator*(const Velocity& v) {
		double x2 = v.getX();
		double y2 = v.getY();
		double z2 = v.getZ();

		x = y * z2 - y2 * z;
		y = z * x2 - z2 * x;
		z = x * y2 - x2 * y;

		return *this;
	}

	Velocity operator/(double a) {
		if (a == 0) a = 0.1;
		return *(new Velocity(this->getX() / a, this->getY() / a, this->getZ() / a));
	}

	Velocity& operator=(const Velocity& v)
	{
		this->setX(v.getX());
		this->setY(v.getY());
		this->setZ(v.getZ());

		return *this;
	}
};

