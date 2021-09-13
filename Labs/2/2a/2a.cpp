#define N 3

#include <conio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "Sport.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	Sport obj[N]{
		Sport("qwert", "q", 123.5, 3),
		Sport("qwert", "q", 123.5, 3),
		Sport("zxcv", "z", 432.6, 1)
	};

	for (int i = 0; i < N; i++)
	{
		obj[i].print();
	}

	int a, b;
	cout << endl << "Operator ==" << endl << "Choose objects: ";
	cin >> a >> b;
	obj[a] == obj[b];
	_getch();
	system("cls");
	for (int i = 0; i < N; i++)
	{
		obj[i].print();
	}

	cout << endl << "Operator =" << endl << "Choose objects: ";
	cin >> a >> b;
	obj[a] = obj[b];
	system("cls");
	for (int i = 0; i < N; i++)
	{
		obj[i].print();
	}

	cout << endl << "Operator +" << endl << "Choose objects: ";
	cin >> a >> b;
	Sport q = obj[a] + obj[b];
	cout << setw(10) << q.getName() << setw(7) << q.getCode() << setw(7) << q.getArea() << setw(7) << q.getPlace() << endl;

}