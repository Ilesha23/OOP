class Rectangle: public Figure
{
public:
	int x, y;
	Rectangle(int a, int b) {
		x = a;
		y = b;
	}

	int area() {
		return x * y;
	}
	void show() override {
		cout << "Rectangle's area: " << area() << endl;
	}
};