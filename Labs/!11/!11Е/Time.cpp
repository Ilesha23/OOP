//—оздать класс ¬рем€(часы, минуты, секунды).
//Ц  ласс должен содержать гетеры и сеттеры(методы изменени€ времени на заданное количество часов,
//	минут и секунд и вывода значений каждого пол€) с проверкой допустимости вводимых значений.¬
//	случае недопустимых значений полей Ц корректно обработать ситуацию.
//	Ц —оздать функцию вывода всего объекта врем€ на экран.
//	Ц —оздать функцию подсчета разности времен двух объектов.
//	Ц —оздать функцию сравнени€ времен двух объектов.
//	Ц ќпределить угол между часовой и минутной стрелками.

#include <iostream>
using namespace std;

class Time {
private:
	int hour = 0, min = 0, sec = 0;

public:
	Time() {
		setH(0);
		setM(0);
		setS(0);
	}
	Time(int h, int m, int s) {
		setH(h);
		setM(m);
		setS(s);
	}

	void setH(int hour) {
		this->hour = hour;
	}
	int getH() {
		return hour;
	}

	void setM(int min) {
		this->min += min;
	}
	int getM() {
		return min;
	}

	void setS(int sec) {
		this->sec = sec;
	}
	int getS() {
		return sec;
	}

	void add(int h, int m, int s) {
		if ((s % 60) > 0)
		{

		}
		if ((s % 60) <= 0)
		{
			if ((getS() + s) > 60)
			{
				min++;
				sec = s % 60;
			}
		}
		/*hour += h;
		min += m;
		sec += s;*/
	}

	void print() {
		cout << "Time is: " << getH() << ":" << getM() << ":" << getS() << endl;
	}
};