#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <algorithm>
#include "Train.cpp"
using namespace std;

int main()
{
    Train train1("zaporozhye", 12, 2);
    Train train2("dnepr", 32, 9);
    Train train3("dnepr", 27, 1);
    Train train4("kharkov", 43, 7);
    Train train5("kiyev", 94, 4);

    Train mas[5]{train1, train2, train3, train4, train5};
    
    int a, num;
    do
    {
        cout << "1 - print all trains" << endl << "2 - print train by it`s number" << endl << "3 - sort by destination" << endl << "Enter: ";
        cin >> a;
        switch (a)
        {
        case 1:
            mas[4].printMas(mas);
            break;
        case 2:
            cout << "Choose train: ";
            cin >> num;
            cout << endl;
            mas[4].printNum(mas, num);
            break;
        case 3:
            mas[4].sortSwap(mas);
            break;
        default:
            break;
        }
    } while (a == 1 || a == 2 || a == 3);   
}




















//for (int i = 0; i < 10; i++)
//{
//    cout << "destination - " << mas[i].getDest() << endl;
//    cout << "number - " << mas[i].getNumber() << endl;
//    cout << "departure time - " << mas[i].getDep() << endl;
//}
//cout << endl;
//for (int i = 0; i < 5; i++)
//{
//    if (mas[i].getNumber() < mas[i + 1].getNumber())
//    {
//        swap(mas[i], mas[i + 1]);
//    }
//}
//cout << endl;
//for (int i = 0; i < 5; i++)
//{
//    cout << "destination - " << mas[i].getDest() << endl;
//    cout << "number - " << mas[i].getNumber() << endl;
//    cout << "departure time - " << mas[i].getDep() << endl;
//}