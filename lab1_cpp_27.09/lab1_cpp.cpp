#include <iostream>
#include <iomanip>
#include <compare>''
#include "overload.h"
#include "literals.h"
#include "FileManager.h"
using namespace std;

int main()
{
    FileManager fm("data.txt");
    Mass m(0);
    Energy e(0);
    Velocity v(0, 0, 0);
    Impulse p(0, 0, 0);
    Force f(0, 0, 0);
    Acceleration a(0, 0, 0);
    fm.readFile(m, e, v, p, f, a);
    /*fm.addRecord(12);*/

   /* Velocity v1(0, 0, 0);
    Velocity v2(0, 0, 0);
    cin >> v1;
    cin >> v2;
    cout << v1 + v2;*/

    cout << "Mass" << endl;
    cout << m;
    cout << "Energy" << endl;
    cout << e;
    cout << "Velocity" << endl;
    cout << v;
    cout << "Impulse" << endl;
    cout << p;
    cout << "Force" << endl;
    cout << f;
    cout << "Acceleration" << endl;
    cout << a;
    //->*
    cout << "\n" << m ;
    return 0;
}