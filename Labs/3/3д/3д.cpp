#include <iostream>
#include <iomanip>
#include <conio.h>
#include <vector>
#include <string>
#include "Persona.h"
#include "Prepod.h"
#include "Zav_kaf.h"
#include "Student.h"
#include "VUZ.h"
using namespace std;

int main()
{
	VUZ vuz;
    int a, b;
    do
    {
        vuz.print();
        cout << endl << setw(15) << "Add - 1" << endl; cout << setw(15) << "Prepod > 50 - 2" << endl; cout << setw(15) << "Student 2's - 3" << endl; cout << setw(15) << "Print - 4" << endl; cout << setw(15) << "Who - 5" << endl; cout << setw(15) << "Ask - 6" << endl; cout << setw(14) << "  Enter:  ";
        cin >> a;
        switch (a)
        {
        case 1:
            system("cls");
            vuz.addElem();
            system("cls");
            break;
        case 2:
            system("cls");
            vuz.print50();
            _getch();
            system("cls");
            break;
        case 3:
            system("cls");
            vuz.printStud2();
            _getch();
            system("cls");
            break;
        case 4:
            system("cls");
            cout << "Enter: "; cin >> b;
            vuz.printByNum(b);
            _getch();
            system("cls");
            break;
        case 5:
            system("cls");
            cout << "Enter: "; cin >> b;
            vuz.printWho(b);
            _getch();
            system("cls");
            break;
        case 6:
            system("cls");
            cout << "Enter: "; cin >> b;
            vuz.printAsk(b);
            _getch();
            system("cls");
            break;
        default:
            break;
        }
    } while (a <= 6 && a >= 0);
}