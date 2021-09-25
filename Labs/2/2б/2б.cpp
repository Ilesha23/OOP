#define N 3
#define _CRT_SECURE_NO_WARNINGS

#include <conio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include "Sport.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	char* n1 = new char[20]; strcpy(n1, "asdfghop");
	char* n2 = new char[20]; strcpy(n2, "asdfghop");
	char* n3 = new char[20]; strcpy(n3, "zxcvbnopop");
	Sport obj[N]{
		Sport(n1, "a", 123.5, 3),
		Sport(n2, "a", 123.5, 3),
		Sport(n3, "z", 432.6, 1)
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

	/*cout << endl << "Operator =" << endl << "Choose objects: ";
	cin >> a >> b;
	obj[a] = obj[b];
	system("cls");
	for (int i = 0; i < N; i++)
	{
		obj[i].print();
	}*/

	cout << endl << "Operator +" << endl << "Choose objects: ";
	cin >> a >> b;
	Sport q = obj[a] + obj[b];
	cout << setw(10) << q.getName() << setw(7) << q.getCode() << setw(7) << q.getArea() << setw(7) << q.getPlace() << endl;
	_getch();

	system("cls");
	for (int i = 0; i < N; i++)
	{
		obj[i].print();
	}
	cout << endl << endl << "Operator >>" << endl << "Enter: ";
	Sport w;
	cin >> w;

	cout << endl << "Operator <<" << endl;
	cout << w;
	_getch();

	system("cls");
	for (int i = 0; i < N; i++)
	{
		obj[i].print();
	}
	cout << endl << "Operator []" << endl << "Enter: ";
	int r;
	cin >> r;
	cout << obj[r][r];
	_getch();

	system("cls");
	for (int i = 0; i < N; i++)
	{
		obj[i].print();
	}
	cout << endl << endl << "Operator ()" << endl << "Enter: ";
	char* an = new char[20];
	string cc;
	double aa;
	int pp;
	cout << endl << "Name: "; cin >> an;
	cout << "Code: "; cin >> cc;
	cout << "Area: "; cin >> aa;
	cout << "Place: "; cin >> pp;
	obj[1](an, cc, aa, pp);
	cout << obj[1];
}