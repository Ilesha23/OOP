#pragma once
using namespace std;
class Staff
{
public:
	map<Person, Person> mp;

	Staff() {
		
	}
	void insert(string n, int a) {
		mp[Person(n)] = Person(a);
	}
	void insert(int a, string n) {
		mp[Person(a)] = Person(n);
	}

	///////////////////////////////
	void print1() {
		for (auto it = mp.begin(); it != mp.end(); it++)
		{
			//cout << it->first.name << it->second << endl;
			if (it->first.name == "")
				cout << it->first.age;
			else cout << it->first.name;
		}
	}
};