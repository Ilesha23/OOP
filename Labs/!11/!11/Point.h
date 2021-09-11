//—оздать класс Point(2 переменные х и у).–еализовать функции класса :
//Ц  онструктор по умолчанию;
//Ц  онструктор с параметром;
//Ц  онструктор копировани€;
//Ц функци€ инициализации переменных х и у(set());
//Ц функци€, котора€ возвращает сумму и произведение переменных(передача параметров
//	через ссылки);
//Ц вывод результатов.
#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;

public:
	int& xx = x;
	int& yy = y;

	Point() {
		setX(0);
		setY(0);
	}
	Point(int x, int y) {
		setX(x);
		setY(y);
	}
	Point(Point& a) {
		setX(a.x);
		setY(a.y);
	}

	void setX(int x) {
		this->x = x;
	}
	void setY(int y) {
		this->y = y;
	}

	int sum() {
		return xx + yy;
	}
	int mult() {
		return xx * yy;
	}

	void printSum() {
		cout << x << " + " << y << " = " << sum() << endl;
	}
	void printMult() {
		cout << x << " * " << y << " = " << mult() << endl;
	}
};

