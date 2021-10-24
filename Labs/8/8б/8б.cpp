#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
	Array<int> a;
	int q = 1;
	for (size_t i = 0; i < a.size(); i++)
	{
		a.fillElem(q, i);
		q++;
	}
	a.print();
	cout << endl << "Sum of elemets is: " << a.sum() << endl << "Average is: " << a.avg() << endl << "Max is: " << a[1] << endl;
}