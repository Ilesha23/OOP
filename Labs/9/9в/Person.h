#pragma once
using namespace std;
class Person
{
public:
	string name;
	int age;

	Person(){
		name = "";
		age = 0;
	}
	Person(string n) {
		name = n;
	}
	Person(int a) {
		age = a;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	///////////////////////////////////
	void print() {
		if (name == "")
			cout << age;
		else cout << name;
	}
	friend bool operator < (const Person& a, const Person& b);
	friend ostream& operator << (ostream& stream, const Person& a);
};

bool operator<(const Person& a, const Person& b)
{
	if (a.name < b.name)
		return true;
	return false;
}

//////////////////////////////////////////
inline ostream& operator<<(ostream& stream, const Person& a)
{
	stream << a.name << "  " << a.age;
	return stream;
}

class Functor {
public:
	bool operator()(const Person& a, const Person& b) {
		if (a.age < b.age)
			return true;
		else return false;
	}
};