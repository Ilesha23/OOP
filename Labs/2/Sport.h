#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class Sport
{
private:
	string name;
	string code;
	double area;
	int place;

public:
	Sport(string name, string code, double area, int place) {
		setAll(name, code, area, place);
	}
	Sport() {
		setAll("", "", 0, 0);
	}

	void setAll(string name, string code, double area, int place) {
		this->name = name;
		this->code = code;
		this->area = area;
		this->place = place;
	}
	string getName() {
		return name;
	}
	string getCode() {
		return code;
	}
	double getArea() {
		return area;
	}
	int getPlace() {
		return place;
	}
	
	void print() {
		cout << setw(10) << name << setw(7) << code << setw(7) << area << setw(7) << place << endl;
	}

	Sport& operator =(const Sport& ob) {
		if (&ob != this)
		{
			name = ob.name;
			code = ob.code;
			area = ob.area;
			place = ob.place;
			return *this;
		}
	}

	int operator ==(Sport& ob) {
		if (name != ob.name) { cout << "Данные экземпляры класса не равны." << endl; }
		else if (code != ob.code) { cout << "Данные экземпляры класса не равны." << endl; }
		else if (area != ob.area) { cout << "Данные экземпляры класса не равны." << endl; }
		else if (place != ob.place) { cout << "Данные экземпляры класса не равны." << endl; }
		else cout << "Экземпляры класса равны." << endl;
		return 0;
	}

	Sport operator +(Sport& ob) {
		Sport q;
		q.name = name + ob.name;
		q.code = code + ob.code;
		q.area = area + ob.area;
		q.place = place +ob.place;
		return q;
	}
};