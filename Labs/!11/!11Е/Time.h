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

	void setTime() {
		int x, y, z;
		cout << "Enter hours, mins and seconds: ";
		cin >> x >> y >> z;
		setH(x);
		setM(y);
		setS(z);
	}

	void setH(int hour) {
		if (hour < 24)
		{
			this->hour = hour;
		}
		else
		{
			this->hour = 0;
		}
	}
	int getH() {
		return hour;
	}

	void setM(int min) {
		if (min < 60)
		{
			this->min = min;
		}
		else
		{
			this->min = 0;
		}
	}
	int getM() {
		return min;
	}

	void setS(int sec) {
		if (sec < 60)
		{
			this->sec = sec;
		}
		else
		{
			this->sec = 0;
		}
	}
	int getS() {
		return sec;
	}

	void add(int h, int m, int s) {
		/////////////////////////////////////////////SECONDS///////////////////////////////
		if (s >= 60)
		{
			int q = 0, w = 0;
			do
			{
				s -= 60;
				q++;
				if (q >= 60)
				{
					q = 0;
					w++;
				}
			} while (s >= 60);
			if (s + sec == 60)
			{
				q++;
				sec = 0;
			}
			sec += s;
			if ((min + q) == 60)
			{
				min = 0;
				hour++;
			}
			else if ((min + q) > 60)
			{
				min = min + q - 60;
			}
			else if (min + q < 60)
			{
				min += q;
			}

			if (w > 0)
			{
				if ((hour + w) >= 24)
				{
					hour = hour + w - 24;
				}
				else if((hour + w) < 24)
				{
					hour += w;
				}
			}
		}
		else if (s < 60)
		{
			if ((getS() + s) >= 60)
			{
				min++;
				sec = sec + s - 60;
			}
			else if ((getS() + s) < 60)
			{
				sec += s;
			}
		}
		///////////////////////////////////////////////////////////MINUTES////////////////////////////////////////
		if (m >= 60)
		{
			int q = 0;
			do
			{
				m -= 60;
				q++;
			} while (m >= 60);
			if ((hour + q) >= 24)
			{
				hour = hour + q - 24;
			}
			else
			{
				hour += q;
			}
		}
		if (m < 60)
		{
			if ((min + m) >= 60)
			{
				hour++;
				min = min + m - 60;
			}
			else if ((min + m) < 60)
			{
				min += m;
			}
		}
		//////////////////////////////////////////////////HOURS/////////////////////////////////////////////////
		if (h >= 24)
		{
			int q = 0;
			do
			{
				h -= 24;
				q++;
			} while (h >= 24);
			if (hour + h >= 24)
			{
				hour = hour + h - 24;
			}
			else if (hour + h < 24)
			{
				hour = hour + h;
			}
		}
		if (h < 24)
		{
			if (hour + h >= 24)
			{
				hour = hour + h - 24;
			}
			else if (hour + h < 24)
			{
				hour = hour + h;
			}
		}
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	}

	void difference(Time x, Time y) {
		cout << x.getH() - y.getH() << ":" << x.getM() - y.getM() << ":" << x.getS() - y.getS() << endl;
	}

	void compare(Time x, Time y) {
		cout << "Compare: " << abs(x.getH() - y.getH()) << ":" << abs(x.getM() - y.getM()) << ":" << abs(x.getS() - y.getS()) << endl;
	}

	void deg() {
		double a = abs((hour * 30 + min / 2) - min * 6);
		if (a >= 180)
		{
			a = 360 - a;
		}
		cout <<"Degree: " << a << endl;
	}

	void print() {
		cout << "Time is: ";
		if (hour >= 10) cout << hour << ":";
		else cout << "0" << hour << ":";
		if (min >= 10) cout << min << ":";
		else cout << "0" << min << ":";
		if (sec >= 10) cout << sec << endl;
		else cout << "0" << sec << endl;
	}
};