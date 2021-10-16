#include <iostream>
#include <string>
#include "Write.h"
using namespace std;

int main()
{
	string a;
	cout << "Enter string: "; cin >> a;
	Write q(a);
	q.print();
	cout << q;
}
//"hH4eE3lL1lL1oO0"