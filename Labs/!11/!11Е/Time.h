class Time {
private:
	int hour, min, sec;

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
	}
	void setH(int hour) {
		this->hour = hour;
	}
	int getH() {
		return hour;
	}
	void setM(int min) {
		this->min = min;
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
	void print() {
		cout << "q";
	}
};