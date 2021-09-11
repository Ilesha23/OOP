//Создать класс Figure для вычисления площади фигур(круга и треугольника).В
//конструкторе использовать аргументы по умолчанию.

#include <iostream>
#include "Figure.h"
using namespace std;

int main()
{
    Figure circle(4.0);
    Figure triangle(0.0, 5.0, 5.0, 5.0);
    cout << "Circle`s area: " << circle.area() << endl;
    cout << "Triangle`s area: " << triangle.area() << endl;
}