class Figure
{
private:
	double x, y;

public:
	Figure(double x) {
		setX(x);
		setY(x);
	}
	Figure(double x, double y) {
		setX(x);
		setY(y);
	}

	void setX(double x) {
		this->x = x;
	}
	void setY(double y) {
		this->y = y;
	}
	double getX(double x) {
		return x;
	}
	double getY(double y) {
		return y;
	}

	double area() {
		return getX(x) * getY(y);
	}
};