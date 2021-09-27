#include "files.h"
#include <compare>
using namespace std;

double input() {
	double a;
	while (!(cin >> a) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error!" << endl;
	}
	return a;
}

Impulse operator*(const Mass& m, const Velocity& v)
{
	return Impulse(m.get() * v.getX(), m.get() * v.getY(), m.get() * v.getZ());
}
Impulse operator*(const Velocity& v, const Mass& m)
{
	return Impulse(m.get() * v.getX(), m.get() * v.getY(), m.get() * v.getZ());
}


Energy operator*(const Impulse& p, const Velocity& v) {
	return Energy(p.abs() * v.abs());
}
Energy operator*(const Velocity& v, const Impulse& p) {
	return Energy(p.abs() * v.abs());
}


Velocity operator/(const Impulse& p, const Mass& m) {
	return Velocity(p.getX() / m.get(),
		p.getY() / m.get(),
		p.getZ() / m.get());
}


Mass operator/(const Impulse& p, const Velocity& v) {
	return Mass(p.abs() / v.abs());
}


Force operator*(const Mass& m, const Acceleration& a) {
	return Force(a.getX() / m.get(),
		a.getY() / m.get(),
		a.getZ() / m.get());
}
Force operator*(const Acceleration& a, const Mass& m) {
	return Force(a.getX() / m.get(),
		a.getY() / m.get(),
		a.getZ() / m.get());
}


Energy operator*(const Force& f, double a) {
	return Energy(f.abs() * a);
}
Energy operator*(double a, const Force& f) {
	return Energy(f.abs() * a);
}


Mass operator/(const Force& f, const Acceleration& a) {
	return *(new Mass(f.abs() / a.abs()));
}


Acceleration operator/(const Force& f, const Mass& m) {
	return *(new Acceleration(f.getX() / m.get(),
		f.getY() / m.get(),
		f.getZ() / m.get()));
}


Impulse operator/(const Energy& e, const Velocity& v) {
	return *(new Impulse(e.get() / v.getX(),
		e.get() / v.getY(),
		e.get() / v.getZ()));
}


Velocity operator/(const Energy& e, const Impulse& p) {
	return *(new Velocity(e.get() / p.getX(),
		e.get() / p.getY(),
		e.get() / p.getZ()));
}


Energy operator*(const Mass& m, double a) {
	return *(new Energy(m.get() * a));
}



ostream& operator<<(ostream& os, const Mass& a)
{
	os << a.get() << "kg" << endl;
	return os;
}

istream& operator>>(istream& is, Mass& a)
{
	double n;
	n = input();
	a.set(n);
	return is;
}

ostream& operator<<(ostream& os, const Velocity& a)
{
	os << "x:" << a.getX() << "m/s" << endl;
	os << "y:" << a.getY() << "m/s" << endl;
	os << "z:" << a.getZ() << "m/s" << endl;
	return os;
}

istream& operator>>(istream& is, Velocity& a)
{
	double x, y, z;
	cout << "x:";
	x = input();
	cout << "y:";
	y = input();
	cout << "z:";
	z = input();

	a.setX(x);
	a.setY(y);
	a.setZ(z);
	return is;
}

ostream& operator<<(ostream& os, const Impulse& a)
{
	os << "x:" << a.getX() << "kgm/s" << endl;
	os << "y:" << a.getY() << "kgm/s" << endl;
	os << "z:" << a.getZ() << "kgm/s" << endl;
	return os;
}

ostream& operator<<(ostream& os, const Acceleration& a)
{
	os << "x:" << a.getX() << "m/s2" << endl;
	os << "y:" << a.getY() << "m/s2" << endl;
	os << "z:" << a.getZ() << "m/s2" << endl;
	return os;
}

ostream& operator<<(ostream& os, const Force& a)
{
	os << "x:" << a.getX() << "N" << endl;
	os << "y:" << a.getY() << "N" << endl;
	os << "z:" << a.getZ() << "N" << endl;
	return os;
}

ostream& operator<<(ostream& os, const Energy& a)
{
	os << "x:" << a.get() << "J" << endl;
	return os;
}



//partial_ordering operator <=> (const Mass& m1, const Mass& m2) const noexcept
//{
//	if (m1.get() == m2.get())
//		return partial_ordering::equivalent;
//	else if (m1.get() < m2.get())
//		return partial_ordering::less;
//	else
//		return partial_ordering::greater;
//	//return (m1.get() <=> m2.get());
//}