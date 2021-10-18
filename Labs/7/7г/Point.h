#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;

public:
	Point() {
		setX(0);
		setY(0);
	}
	Point(int x, int y) {
		setX(x);
		setY(y);
	}
	/*Point(Point& a) {
		setX(a.x);
		setY(a.y);
	}*/

	void setX(int x) {
		this->x = x;
	}
	void setY(int y) {
		this->y = y;
	}

	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

	int sum() {
		return x + y;
	}
	int mult() {
		return x * y;
	}

	void printPoint() {
		cout << setw(6) << "X: " << x << setw(6) << "Y: " << y << endl;
	}
	void printSum() {
		cout << x << " + " << y << " = " << sum() << endl;
	}
	void printMult() {
		cout << x << " * " << y << " = " << mult() << endl;
	}
};