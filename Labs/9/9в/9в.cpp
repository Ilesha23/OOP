#include <iostream>
#include <conio.h>
#include "Staff.h"
using namespace std;

int main()
{
	Staff a;
	a.insert("abc", 456);
	a.insert("bcd", 345);
	a.insert("cde", 234);
	a.insert("def", 123);
	a.print();
	_getch();

	int q;
	string n;
	cout << "Print by index" << endl;
	cout << "Enter: "; cin >> q;
	a.printByNum(q);
	_getch();
	system("cls");

	a.print();
	cout << "Print all names" << endl;
	a.printNames();
	_getch();
	system("cls");

	a.print();
	cout << "Print all ages" << endl;
	a.printAges();
	_getch();
	system("cls");

	a.print();
	cout << "Print age by index" << endl;
	cout << "Enter: "; cin >> q;
	a.printAgeByNum(q);
	_getch();
	system("cls");

	a.print();
	cout << "Print name by index" << endl;
	cout << "Enter: "; cin >> q;
	a.printNameByNum(q);
	_getch();
	system("cls");

	a.print();
	cout << "Delete by name" << endl;
	cout << "Enter: "; cin >> n;
	a.del(n);
	_getch();
	system("cls");

	a.print();
	cout << "Find by name" << endl;
	cout << "Enter: "; cin >> n;
	a.findByName(n);
	_getch();
	system("cls");

	a.print();
	cout << "Find by age" << endl;
	cout << "Enter: "; cin >> q;
	a.findByAge(q);
	_getch();
	system("cls");
}