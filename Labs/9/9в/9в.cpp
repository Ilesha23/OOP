#include <iostream>
//#include "Person.h"
#include "Staff.h"
#include <iostream>
using namespace std;

int main()
{
	Staff a;
	a.insert("a", 3);
	a.insert("b", 2);
	a.insert("c", 1);
	a.print();
	/*a.printByNum(1);
	a.printNames();
	a.printAges();
	a.printAgeByNum(1);
	a.printNameByNum(1);
	a.del("b");
	a.print();
	a.findByName("b");*/
}