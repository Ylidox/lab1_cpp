#include <iostream>
#include <iomanip>
#include <compare>
#include "overload.h"
#include "literals.h"
#include "FileManager.h"
using namespace std;

int main()
{
    Velocity v1(0, 0, 0);
    Velocity v2(0, 0, 0);
    cin >> v1;
    cin >> v2;
    cout << v1 + v2;
    return 0;
}
