#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main()
{
	Triangle t(3, 4, 5);
	Figure* tt = &t;
	tt->show();

	Rectangle r(3, 5);
	Figure* rr = &r;
	rr->show();

	Circle c(5);
	Figure* cc = &c;
	cc->show();
}