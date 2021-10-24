#include <iostream>
#include <fstream>
#include "number.h"
using namespace std;

int main()
{
	number <double> a;
	number<double> b;
	cout << "Enter first double: "; cin >> a;
	cout << "Enter second double: "; cin >> b;
	number<double> c;
	c = a / b;
	cout << "a / b = " << c << endl;
	c = a * b;
	cout << "a * b = " << c << endl;
	c = a + b;
	cout << "a + b = " << c << endl;
	c = a - b;
	cout << "a - b = " << c << endl;
}