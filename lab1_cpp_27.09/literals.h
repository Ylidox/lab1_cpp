#include "files.h"
Mass operator "" _kg(double long a) {
	return Mass(a);
}

Velocity operator "" _xmps(long double a) {
	return Velocity(a, 0, 0);
}
Velocity operator "" _ymps(long double a) {
	return Velocity(0, a, 0);
}
Velocity operator "" _zmps(long double a) {
	return Velocity(0, 0, a);
}

Impulse operator "" _xkgmps(long double a) {
	return Impulse(a, 0, 0);
}
Impulse operator "" _ykgmps(long double a) {
	return Impulse(0, a, 0);
}
Impulse operator "" _zkgmps(long double a) {
	return Impulse(0, 0, a);
}

Acceleration operator "" _xmpss(long double a) {
	return Acceleration(a, 0, 0);
}
Acceleration operator "" _ympss(long double a) {
	return Acceleration(0, a, 0);
}
Acceleration operator "" _zmpss(long double a) {
	return Acceleration(0, 0, a);
}

Force operator "" _xN(long double a) {
	return Force(a, 0, 0));
}
Force operator "" _yN(long double a) {
	return Force(0, a, 0));
}
Force operator "" _zN(long double a) {
	return Force(0, 0, a));
}


Energy operator "" _J(long double a) {
	return *(new Energy(a));
}
