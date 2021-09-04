#include <iostream>
#include "Figure.cpp"
#include "Area.cpp"

using namespace std;

int main()
{
	/*Figure square(3.0);
	Figure rectangle(3.0, 5.0);

	cout << square.area() << endl;
	cout << rectangle.area() << endl;*/

	Area fig1;
	Area fig2;

	cout << fig1.area(2.0) << endl;
	cout << fig2.area(2.0, 8.0) << endl;
}