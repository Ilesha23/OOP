#include <iostream>
#include <conio.h>
#include <string>
#include "Enterprise.h"
using namespace std;

int main()
{
	Enterprise obj[5];

    bool q = false;
    int a;
    do
    {
        cout << endl << setw(15) << "Create - 1" << endl; cout << setw(15) << "Sort - 2" << endl; cout << setw(15) << "Show - 3" << endl; cout << setw(15) << "Exit - 4" << endl;
        cout << "> "; cin >> a;
        switch (a)
        {
        case 1:
            obj[0].change("name5", 12345678, 1234.32, 329);
            obj[1].change("name4", 87654321, 1234.64, 785);
            obj[2].change("name3", 13578642, 4328.64, 934);
            obj[3].change("name2", 86421357, 9465.37, 620);
            obj[4].change("name1", 75312468, 1792.36, 815);
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
            print(obj, 5);
            _getch();
            break;
        case 4:
            EXIT_SUCCESS;
            exit(3);
        default:
            break;
        }
    } while (a <= 4 && a >= 0);

}