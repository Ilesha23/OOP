#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

int main()
{
    Time t1, t2;
    t1.print();
    t2.print();
    int a, c;
    do
    {
        cout << endl;
        cout << setw(22) << "Set first time - 1" << endl; cout << setw(22) << "Set second time - 2" << endl; cout << setw(22) << "Add to first time - 3" << endl; cout << setw(22) << "Add to second time - 4" << endl; cout << setw(22) << "Difference - 5" << endl; cout << setw(22) << "Degree - 6" << endl; cout << setw(21) << "  Enter: ";
        cin >> a;
        switch (a)
        {
        case 1:
            system("cls"); t1.print(); t2.print(); cout << endl;
            t1.setTime();
            system("cls"); t1.print(); t2.print(); cout << endl;
            break;
        case 2:
            system("cls"); t1.print(); t2.print(); cout << endl;
            t2.setTime();
            system("cls"); t1.print(); t2.print(); cout << endl;
            break;
        case 3:
            system("cls"); t1.print(); t2.print(); cout << endl;
            int x, y, z;
            cout << "Enter hours, mins and seconds: ";
            cin >> x >> y >> z;
            t1.add(x, y, z);
            system("cls"); t1.print(); t2.print(); cout << endl;
            break;
        case 4:
            system("cls"); t1.print(); t2.print(); cout << endl;
            cout << "Enter hours, mins and seconds: ";
            cin >> x >> y >> z;
            t2.add(x, y, z);
            system("cls"); t1.print(); t2.print(); cout << endl;
            break;
        case 5:
            system("cls"); t1.print(); t2.print(); cout << endl;
            t1.compare(t1, t2);
            break;
        case 6:
            system("cls"); t1.print(); t2.print(); cout << endl;
            cout << "First time - 1" << endl << "Second time - 2" << endl << "Enter: "; cin >> c; system("cls");
            if (c == 1)
            {
                t1.print(); t2.print(); cout << endl;
                t1.deg();
            }
            else
            {
                t1.print(); t2.print(); cout << endl;
                t2.deg();
            }
            break;
        default:
            break;
        }
    } while (a <= 6);
}