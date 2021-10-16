#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class DB
{
public:
	string title;
	Sport* rows[12];
	int col;
	bool sorted;

	DB(string q) {
		title = q;
		col = 0;
		sorted = false;
	}
	DB() {
		title = "Title";
		col = 0;
		sorted = false;
	}
	~DB() {
		if (col)
			for (int i = 0; i < col; i++)
				delete rows[i];
	}
	friend ostream& operator<<(ostream& stream, DB& temp);

	void push_back(string a, string code, double area, int place) {
		if (col >= 12) return;
		else col++;
		rows[col - 1] = new Sport(a, code, area, place);
		sorted = false;
	}
	void pop_back() {
		if (col <= 0) return;
		delete rows[col - 1];
		col--;
	}
	void sort() {
		string s1;
		string s2;
		if (col < 2) return;
		Sport* temp;

		for (int i = 0; i < col; i++)
			for (int j = i + 1; j < col; j++) {
				s1 = rows[i]->getName();
				s2 = rows[j]->retName();
				if (s1 > s2) {
					temp = rows[i];
					rows[i] = rows[j];
					rows[j] = temp;
				}
				if (s1 == s2)
				{
					if (rows[i]->getArea() > rows[j]->getArea())
					{
						temp = rows[i];
						rows[i] = rows[j];
						rows[j] = temp;
					}
				}
			}
		sorted = true;
	}
};
ostream& operator<<(ostream& stream, DB& o1) {
	stream << o1.title << endl;
	if (o1.sorted == 0) stream << "Таблица не отсортирована.\n";
	else stream << "Таблица отсортирована.\n";
	if (!o1.col) stream << "Таблица пуста.";
	else {
		for (int i = 0; i < o1.col; i++) {
			stream << *o1.rows[i];
		}
	}
	return stream;
}