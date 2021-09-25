#include <iostream>
#include "B.h"
#include "D1.h"
#include "D2.h"
#include "D3.h"
#include "D4.h"
#include "D5.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	D4 d4(100, 200, 300, 400, 500);
	D5 d5(1, 2, 3, 4, 5);
	cout << "D4 d4(100, 200, 300, 400, 500);" << endl;
	cout << "D4 d5(1, 2, 3, 4, 5);" << endl << endl;
	cout << "Следуя иерархии класса D4: " << endl;
	d4.show();
	cout << "\nСледуя иерархии класса D5: " << endl;
	d5.show();


	return 0;
}