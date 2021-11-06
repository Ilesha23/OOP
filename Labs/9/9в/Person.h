#pragma once
#include <string>
using namespace std;

class Person
{
public:
	string name;
	int age;

	Person(string n, int a) {
		name = n;
		age = a;
	}
	/*Person(string n) {
		name = n;
		age = 0;
	}
	Person(int a) {
		age = a;
		name = "";
	}*/
	Person() {
		name = "";
		age = 0;
	}
	string getName() {
		return name;
	}
	friend bool operator < (const Person& a, const Person& b) {
		return a.name < b.name;
	}
};

class compare {
public:
	bool operator()(const Person& a, const Person& b) const {
		return a.age < b.age;
	}
};