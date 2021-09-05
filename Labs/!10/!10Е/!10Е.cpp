#include <iostream>
#include "MyArray.h"
using namespace std;

int main()
{
    int a = 0;
    cout << "Enter X and Y: ";
    int x, y, c, d;
    cin >> x >> y;
    MyArray ar1(x, y);
    system("cls");
    ar1.printArray();
    do
    {
        cout << "1 - fill random" << endl << "2 - print by coord" << endl << "3 - print coords of min" << endl << "4 - replace by coords" << endl << "5 - get submatrix" << endl;
        cout << "Enter: ";
        cin >> a;
        switch (a) {
        case 1: {
            ar1.fillRand();
            system("cls");
            ar1.printArray();
            break;
        }
        case 2:
            cout << "Enter X and Y: ";
            cin >> c >> d;
            system("cls");
            ar1.printArray();
            ar1.printByCoord(c, d);
            break;
        case 3:
            system("cls");
            ar1.printArray();
            ar1.printCoordOfMin();
            break;
        case 4:
            cout << "Enter X and Y: ";
            cin >> c >> d;
            cout << "Enter your number: ";
            int q;
            cin >> q;
            system("cls");
            ar1.replaceByCoord(c, d, q);
            ar1.printArray();
            break;
        case 5:
            int w, e, r, t;
            cout << "Enter first coords: ";
            cin >> w >> e;
            cout << endl << "Enter second coords: ";
            cin >> r >> t;
            system("cls");
            ar1.printArray();
            ar1.getSubMatrix(w, e, r, t);
            break;
        default:
            break;
        }
    } while (0 < a < 10);

    /*MyArray ar1(7, 7);
    ar1.fillRand();
    ar1.printArray();
    ar1.printByCoord(3, 5);
    ar1.printCoordOfMin();
    ar1.replaceByCoord(2, 2, 99);
    ar1.printArray();
    ar1.getSubMatrix(1, 1, 2, 2);*/
}