#include <iostream>
#include "MyArray.h"
using namespace std;

int main()
{

    MyArray ar1(7, 7);
    ar1.fillRand();
    ar1.printArray();
    ar1.printByCoord(3, 5);
    ar1.printCoordOfMin();
    ar1.replaceByCoord(2, 2, 99);
    ar1.printArray();
    ar1.getSubMatrix(1, 1, 2, 2);
}