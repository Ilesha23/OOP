#pragma once
#include <map>
#include <string>
#include "Person.h"
//#include "Date.h"
using namespace std;

class Staff
{
public:
	map<Person, Person> mp1;
	map<Person, Person, compare> mp2;

	void insert(string n, int a) {
		mp1.emplace(Person(n, a), Person(n, a));
		mp2.emplace(Person(n, a), Person(n, a));
	}
	void del(string n) {
		for (auto it1 = mp1.begin(); it1 != mp1.end(); it1++)
		{
			if (n == it1->first.name)
			{
				it1 = mp1.erase(it1);
			}
		}
		for (auto it2 = mp2.begin(); it2 != mp2.end(); it2++)
		{
			if (n == it2->first.name)
			{
				it2 = mp2.erase(it2);
			}
		}
	}
	void findByName(string n) {
		for (auto it1 = mp1.begin(); it1 != mp1.end(); it1++)
		{
			if (n == it1->first.name)
			{
				cout << it1->first.name << "  " << it1->second.age << endl;
			}
		}
	}
	void findByAge(int a) {
		for (auto it1 = mp1.begin(); it1 != mp1.end(); it1++)
		{
			if (a == it1->second.age)
			{
				cout << it1->first.name << "  " << it1->second.age << endl;
			}
		}
	}
	void print() {
		for (auto it1 = mp1.begin(); it1 != mp1.end(); it1++)
		{
			cout << it1->first.name << "  " << it1->second.age << endl;
		}
		cout << endl;
		for (auto it2 = mp2.begin(); it2 != mp2.end(); it2++)
		{
			cout << it2->first.name << "  " << it2->second.age << endl;
		}
	}
	void printByNum(int a) {
		int q = 0;
		for (auto it1 = mp1.begin(); it1 != mp1.end(); it1++)
		{
			if (q == a)
			{
				cout << it1->first.name << "  " << it1->second.age << endl;
			}
			q++;
		}
	}
	void printNames() {
		for (auto it1 = mp1.begin(); it1 != mp1.end(); it1++)
		{
			cout << it1->first.name << endl;
		}
		cout << endl;
		for (auto it2 = mp2.begin(); it2 != mp2.end(); it2++)
		{
			cout << it2->first.name << endl;
		}
	}
	void printAges() {
		for (auto it1 = mp1.begin(); it1 != mp1.end(); it1++)
		{
			cout << it1->second.age << endl;
		}
		cout << endl;
		for (auto it2 = mp2.begin(); it2 != mp2.end(); it2++)
		{
			cout << it2->second.age << endl;
		}
	}
	void printNameByNum(int a) {
		int q = 0;
		for (auto it1 = mp1.begin(); it1 != mp1.end(); it1++)
		{
			if (q == a)
			{
				cout << it1->first.name << endl;
			}
			q++;
		}
	}
	void printAgeByNum(int a) {
		int q = 0;
		for (auto it1 = mp1.begin(); it1 != mp1.end(); it1++)
		{
			if (q == a)
			{
				cout << it1->second.age << endl;
			}
			q++;
		}
	}
};