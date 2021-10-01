#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{
	int a, b, c1;

	cout << "Enter sides of triangle: "; cin >> a >> b >> c1;
	Triangle t(a, b, c1);
	Figure* tt = &t;
	tt->show();

	cout << "Enter sides of rectangle: "; cin >> a >> b;
	Rectangle r(a, b);
	Figure* rr = &r;
	rr->show();

	cout << "Enter radius of circle: "; cin >> a;
	Circle c(a);
	Figure* cc = &c;
	cc->show();
}