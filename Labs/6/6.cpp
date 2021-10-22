#include <iostream>
#include <conio.h>
#include <string>
#include "Enterprise.h"
using namespace std;

int main()
{
	
    string nam = "";
    bool q = false;
    int a;
    do
    {
        cout << endl << setw(15) << "Create - 1" << endl; cout << setw(15) << "Sort - 2" << endl; cout << setw(15) << "Change - 3" << endl; cout << setw(15) << "Show - 4" << endl; cout << setw(15) << "Exit - 5" << endl;
        cout << "> "; cin >> a;
        switch (a)
        {
        case 1:
            change(obj[0], "name5", 12345678, 1234.32, 329);
            change(obj[1], "name4", 87654321, 1234.64, 785);
            change(obj[2], "name3", 13578642, 4328.64, 934);
            change(obj[3], "name2", 86421357, 9465.37, 620);
            change(obj[4], "name1", 75312468, 1792.36, 815);
            system("cls");
            print(obj, 5);
            q = true;
            break;
        case 2:
            system("cls");
            if (q)
            {
                sort(obj, 5);
                print(obj, 5);
            }
            else cout << "No records" << endl;
            _getch();
            system("cls");
            break;
        case 3:
            system("cls");
            int d;
             long ac; double inc; int num;
            cout << "Enter number of el: "; cin >> d;
            cout << "Name: "; cin >> nam;
            cout << "Account: "; cin >> ac;
            cout << "Income: "; cin >> inc;
            cout << "Number: "; cin >> num;
            change(obj[d], nam, ac, inc, num);
            _getch();
            system("cls");
            break;
        case 4:
            system("cls");
            print(obj, 5);
            _getch();
            break;
        case 5:
            EXIT_SUCCESS;
            exit(3);
        default:
            break;
        }
    } while (a <= 4 && a >= 0);

}