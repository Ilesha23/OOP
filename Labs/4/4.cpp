#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include "Sport.h"
#include "DB.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    DB db1("DB1");
    db1.push_back("abcd", "qw", 234.6, 3);
    db1.push_back("abcd", "fd", 534.8, 4);
    db1.push_back("abcd", "ut", 100.5, 2);
    int a, b, c;
    string nn, cc;
    double area;
    int place;
    do
    {
        cout << db1 << endl;
        cout << endl << setw(15) << "Add - 1" << endl; cout << setw(15) << "Delete - 2" << endl; cout << setw(15) << "Sort - 3" << endl; cout << setw(15) << "Exit - 4" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            system("cls");
            cout << "Name: "; cin >> nn; cout << "Code: "; cin >> cc;
            cout << "Area: "; cin >> area;
            cout << "Place: "; cin >> place;
            db1.push_back(nn, cc, area, place);
            system("cls");
            break;
        case 2:
            system("cls");
            db1.pop_back();
            system("cls");
            break;
        case 3:
            system("cls");
            db1.sort();
            system("cls");
            break;
        case 4:
            EXIT_SUCCESS;
            exit(3);
        default:
            break;
        }
    } while (a <= 6 && a >= 0);
}