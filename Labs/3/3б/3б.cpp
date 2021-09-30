#include <iostream>
#include <string>
#include "Book.h"
#include "Library.h"
using namespace std;

void show(Library* mas) {
	for (int i = 0; i < 3; i++)
	{
		mas[i].show();
	}
}

int main()
{
	Library book1("book1", "author1", 100, 2, true);
	Library book2("book2", "author2", 150, 3, true);
	Library book3("book3", "author3", 200, 4, false);
	Library mas[3] = { book1, book2, book3 };

	show(mas);
	string a;
	cout << "Enter name of book to check if it is at all: "; cin >> a;
	bool b = false;
	for (int i = 0; i < 3; i++)
	{
		if (mas[i].getName() == a)
		{
			b = true;
			cout << "There's a book" << endl;
			if (mas[i].getAvail() == true) {
				cout << "The book is in library" << endl;
				break;
			}
			else cout << "The book is not in library now" << endl;
		}
	}
	if (!b)cout << "There is no book with this name" << endl;
	system("pause");
	
	system("cls");
	show(mas);
	cout << "Enter name of book you want to take: "; cin >> a;
	for (int i = 0; i < 3; i++)
	{
		if (mas[i].getName() == a)
		{
			if (mas[i].getAvail() != true) {
				cout << "The book is not in library" << endl;
				break;
			}
			else mas[i].setAvail(false);
		}
	}
	system("cls");
	show(mas);

}