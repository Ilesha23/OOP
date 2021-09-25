#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class Sport
{
private:
	char* name;
	string code;
	double area;
	int place;
	friend Sport operator+(const Sport& ob1, const Sport& ob2);
	friend int operator==(const Sport& ob1, const Sport& ob2);
	friend ostream& operator<<(ostream& stream, Sport& ob1);
	friend istream& operator>>(istream& stream, Sport& ob1);

public:
	Sport(char* a, string code, double area, int place) {
		setAll(a, code, area, place);
	}
	Sport() {
		name = new char[10];
		strcpy(name, "poiuyt");
		this->code = "g";
		this->area = 123.7;
		this->place = 5;
	}

	void setAll(char* a, string code, double area, int place) {
		name = new char[strlen(a) + 1];
		strcpy(name, a);
		this->code = code;
		this->area = area;
		this->place = place;
	}
	void setName(char* a) {
		strcpy(name, a);
	}
	char* getName() {
		return name;
	}
	void setCode(string code) {
		this->code = code;
	}
	string getCode() {
		return code;
	}
	void setArea(double area) {
		this->area = area;
	}
	double getArea() {
		return area;
	}
	void setPlace(int place) {
		this->place = place;
	}
	int getPlace() {
		return place;
	}

	void print() {
		cout << setw(10) << name << setw(7) << code << setw(7) << area << setw(7) << place << endl;
	}

	int& operator[](int index) const {
		index = strlen(this->name);
		return index;
	}

	Sport operator() (char* a, string code, double area, int place) {
		Sport ob;
		strcpy(name, a);
		this->code = code;
		this->area = area;
		this->place = place;
		return ob;
	}
};

Sport operator+(const Sport& ob1, const Sport& ob2)
{
	Sport q;
	delete[] q.name;
	q.name = new char[strlen(ob1.name) + strlen(ob2.name) + 2];
	strcpy(q.name, ob1.name);
	strcat(q.name, ob1.name);
	strcpy(q.name, ob2.name);
	strcat(q.name, ob2.name);
	q.setCode(ob1.code + ob2.code);
	q.setArea(ob1.area + ob2.area);
	q.setPlace(ob1.place + ob2.place);
	return q;
}
inline int operator==(const Sport& ob1, const Sport& ob2)
{
	string name1 = ob1.name;
	string name2 = ob2.name;
	if (name1 != name2) { cout << "NAME is diffrent." << endl; }
	else if (ob1.code != ob2.code) { cout << "CODE is diffrent." << endl; }
	else if (ob1.area != ob2.area) { cout << "AREA is diffrent." << endl; }
	else if (ob1.place != ob2.place) { cout << "PLACE is diffrent." << endl; }
	else cout << "Ёкземпл€ры класса равны." << endl;
	return 0;
}

inline ostream& operator<<(ostream& stream, Sport& ob1)
{
	stream << setw(10) << ob1.name << setw(7) << ob1.code << setw(7) << ob1.area << setw(7) << ob1.place << endl;
	return stream;
}

inline istream& operator>>(istream& stream, Sport& ob1)
{
	cout << "Name: "; stream >> ob1.name;
	cout << "Code: "; stream >> ob1.code;
	cout << "Area: "; stream >> ob1.area;
	cout << "Place: "; stream >> ob1.place;
	return stream;
}

