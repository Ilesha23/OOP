#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <string>
#include <conio.h>
#include "Point.h"
#include "PointMas.h"
using namespace std;

int main()
{
	string path = "A.txt";
	PointMas pm;
	int w, n;
	do
	{
		cout << endl << setw(20) << "Generate - 1" << endl; cout << setw(20) << "Enter manually - 2" << endl; cout << setw(20) << "Print massive - 3" << endl; cout << setw(20) << "Save one object - 4" << endl; cout << setw(20) << "Save all objects - 5" << endl; cout << setw(20) << "Read one object - 6" << endl; cout << setw(20) << "Read all objects - 7" << endl; cout << setw(20) << "Clear file - 8" << endl;
		cout << "> "; cin >> w; system("cls");
		switch (w)
		{
		case 1:
			cout << "Enter number of elements: "; cin >> n;
			pm.fillGnerate(n);
			system("cls");
			cout << "Generated!" << endl;
			_getch();
			system("cls");
			break;
		case 2:
			cout << "Enter number of elements: "; cin >> n;
			pm.fillManually(n);
			system("cls");
			cout << "Created!" << endl;
			_getch();
			system("cls");
			break;
		case 3:
			cout << "Printed massive:" << endl;
			pm.print();
			_getch();
			system("cls");
			break;
		case 4:
			cout << "Enter index of object (index - 1): "; cin >> n; system("cls");
			pm.writeOneToFile(path, n);
			cout << "Object " << n << " saved" << endl;
			_getch();
			system("cls");
			break;
		case 5:
			cout << "Saved all objects!" << endl;
			pm.writeAllToFile(path);
			_getch();
			system("cls");
			break;
		case 6:
			cout << "Enter index of object (index - 1): "; cin >> n; system("cls");
			pm.readOneFromFile(path, n);
			_getch();
			system("cls");
			break;
		case 7:
			cout << "Read all objcts:" << endl;
			pm.readAllFromFile(path);
			_getch();
			system("cls");
			break;
		case 8:
			cout << "Cleared!" << endl;
			pm.clearFile(path);
			_getch();
			system("cls");
			break;
		default:
			break;
		}
	} while (w <= 8 && w >= 0);
}