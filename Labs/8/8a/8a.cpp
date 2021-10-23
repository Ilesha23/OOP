#include <iostream>
#include <fstream>
#include "number.h"
using namespace std;

int main()
{
	number <double> a;
	number<double> b;
	cin >> a;
	cin >> b;
	number<double> c;
	c = a / b;
	cout << c << endl;	
	c = a * b;
	cout << c << endl;
	c = a + b;
	cout << c << endl;
	c = a - b;
	cout << c << endl;
}