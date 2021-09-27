#pragma once
#include <math.h>

class Vector
{
protected:
	double x, y, z;
public:
	Vector()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	Vector(double a, double b, double c)
	{
		x = a;
		y = b;
		z = c;
	}

	Vector(const Vector& v)
	{
		x = v.x;
		y = v.y;
		z = v.z;
	}

	double getX() const
	{
		return x;
	}

	double getY() const
	{
		return y;
	}

	double getZ() const
	{
		return z;
	}

	void setX(double x)
	{
		this->x = x;
	}

	void setY(double y)
	{
		this->y = y;
	}

	void setZ(double z)
	{
		this->z = z;
	}

	double abs() const
	{
		return sqrt(x * x + y * y + z * z);
	}

	~Vector() {};
};