#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "Person.h"
#include "Staff.h"
using namespace std;

int main()
{
	/*Staff s;
	s.insert("name1", 5);
	s.insert("name2", 4);
	s.insert("name3", 3);
	s.insert("name4", 2);
	s.insert("name5", 1);
	s.print1();*/

	Staff s;
	s.insert(5, "name1");
	s.insert(4, "name2");
	s.insert(3, "name3");
	s.insert(2, "name4");
	s.insert(1, "name5");
	s.print1();
}