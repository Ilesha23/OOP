#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Persona.h"
#include "Prepod.h"
#include "Zav_kaf.h"
#include "Student.h"
using namespace std;

int main()
{
	Prepod pr1("asodi", 30, "Math", 1);
	pr1.print();
	cout << setw(12) << "Who: " << pr1.who() << endl;
	cout << setw(12) << "Step: " << pr1.ask() << endl << endl;

	Zav_kaf z1("uiop", 50, "yueewq");
	z1.print();
	cout << setw(12) << "Who: " << z1.who() << endl;
	cout << setw(12) << "Age: " << z1.ask() << endl;

	Student s1("qwerty", 20);
	s1.print();
	cout << setw(12) << "Who: " << s1.who() << endl;
	cout << setw(12) << "How many 2: " << s1.ask() << endl;
}