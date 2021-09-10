//    – Определить конструктор, которые копирует в новое множество элементы другого множества, не
//    превышающие заданное значение(конструктор копирования).

#include <iostream>
#include <iomanip>
#include "Mult.h"
using namespace std;

int main()
{

    int size, x, y;
    cout << "Creating first multiplicity\nEnter size: "; cin >> size; cout << "From: "; cin >> x; cout << "To: "; cin >> y; cout << endl;
    Mult mult1(size, x, y);
    cout << "Creating second multiplicity\nEnter size: "; cin >> size; cout << "From: "; cin >> x; cout << "To: "; cin >> y; cout << endl;
    Mult mult2(size, x, y);
    system("cls");
    mult1.print();
    mult2.print();
    /*Mult mult1(20, 0, 20);
    Mult mult2(20, 10, 40);
    mult1.print();
    mult2.print();*/
    cout << endl;

    int a, b;
    do
    {
        cout << setw(15) << "Find max - 1" << endl; cout << setw(15) << "Merge - 2" << endl; cout << setw(15) << "Crossing - 3" << endl; cout << setw(15) << "Difference - 4" << endl; cout << setw(15) << "Disjunction - 5" << endl; cout << setw(14) << "  Enter:  ";
        cin >> a;
        switch (a)
        {
        case 1:
            system("cls"); mult1.print(); mult2.print(); cout << endl;
            mult1.findMax();
            mult2.findMax();
            cout << endl;
            break;
        case 2:
            system("cls"); mult1.print(); mult2.print(); cout << endl;
            mult1.merge(mult1, mult2);
            cout << endl;
            break;
        case 3:
            system("cls"); mult1.print(); mult2.print(); cout << endl;
            mult1.crossing(mult1, mult2);
            cout << endl;
            break;
        case 4:
            system("cls"); mult1.print(); mult2.print(); cout << endl;
            cout << "first minus second - 1" << endl << "second minus first - 2" << endl << "Enter: "; cin >> b;
            system("cls"); mult1.print(); mult2.print(); cout << endl;
            if (b == 1)
            {
                cout << setw(13) << "Difference: ";
                mult1.difference(mult1, mult2);
                cout << endl << endl;
            }
            else
            {
                cout << setw(13) << "Difference: ";
                mult2.difference(mult2, mult1);
                cout << endl << endl;
            }
            break;
        case 5:
            system("cls"); mult1.print(); mult2.print(); cout << endl;
            mult1.disjunction(mult1, mult2);
            cout << endl << endl;
        default:
            break;
        }
    } while (a <= 5);
}