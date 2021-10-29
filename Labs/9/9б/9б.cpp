#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <string>
#include <map>
#include "Name.h"
#include "Number.h"
using namespace std;

void findByFirst(map<Name, Number> &mp);
void delByFirst(map<Name, Number> &mp);

int main()
{
	map<Name, Number> mp;
	mp[Name("rewere")] = Number(11324);
	mp[Name("fsfsdf")] = Number(13434);
	mp[Name("vxcvxc")] = Number(32143);
	mp[Name("fgjhgj")] = Number(56434);
	mp[Name("lkjhjk")] = Number(98968);
	
	auto it = mp.begin();
	auto iter = mp.begin();
	string s = "";
	int e = 0, p = 0;
	int w;
	do
	{
		cout << endl << setw(18) << "Print - 1" << endl; cout << setw(18) << "Add - 2" << endl; cout << setw(18) << "Erase by key - 3" << endl; cout << setw(18) << "Find by key - 4" << endl; cout << setw(18) << "Find by first let - 5" << endl; cout << setw(18) << "Dlte by first let - 6" << endl; cout << setw(18) << "Exit - 7" << endl;
		cout << "> "; cin >> w;
		switch (w)
		{
		case 1:
			system("cls");
			cout << "Map <Name, Number>" << endl;
			for (auto it = mp.begin(); it != mp.end(); it++)
			{
				cout << it->first << "  " << it->second << endl;
			}
			_getch();
			system("cls");
			break;
		case 2:
			cout << "Name: "; cin >> s;
			cout << "Number: "; cin >> e;
			mp[s] = e;
			system("cls");
			break;
		case 3:
			cout << "Name: "; cin >> s;
			mp.erase(s);
			cout << endl << "Deleted" << endl;
			_getch();
			system("cls");
			break;
		case 4:
			cout << "Name: "; cin >> s;
			it = mp.find(s);
			cout << it->first << "  " << it->second << endl;
			_getch();
			system("cls");
			break;
		case 5:
			findByFirst(mp);
			_getch();
			system("cls");
			break;
		case 6:
			delByFirst(mp);
			cout << "Deleted" << endl;
			_getch();
			system("cls");
			break;
		case 7:
			exit(3);
			system("cls");
			break;
		default:
			break;
		}
	} while (w <= 7 && w >= 0);
}

void findByFirst(map<Name, Number>& mp)
{
	char a;
	cout << "Enter first letter: "; cin >> a;
	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		if (it->first.name[0] == a)
		{
			cout << it->first << "  " << it->second << endl;
		}
	}
}
void delByFirst(map<Name, Number>& mp)
{
	string a;
	cout << "Enter first letter: "; cin >> a;
	/*for (auto it = mp.begin(); it != mp.end(); it++)
	{
		if (it->first.name[0] == a[0])
		{
			mp.erase(it);
			it = mp.begin();
			continue;
		}
	}*/
	auto itr = mp.begin();
	while (itr != mp.end())
	{
		if (itr->first.name[0] == a[0])
		{
			mp.erase(itr);
			itr = mp.begin();
		}
		else itr++;
	}
}