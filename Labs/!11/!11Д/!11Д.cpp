//    – Определить конструктор, которые копирует в новое множество элементы другого множества, не
//    превышающие заданное значение(конструктор копирования).

#include <iostream>
#include "Mult.h"
using namespace std;

int main()
{
    Mult r(20, 0, 25);
    Mult q(20, 5, 30);
    r.print();
    q.print();
    r.findMax();
    q.findMax();
    r.ob(r, q);
    r.per(r, q);
    cout << setw(13) << "Difference: ";
    r.razn(r, q);
    cout << endl;
    r.dizz(r, q);
}