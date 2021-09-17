#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point a(3, 6);
    Point b(a);
    a.sum();
    a.printSum();
    a.mult();
    a.printMult();
}