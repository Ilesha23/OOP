class Circle: public Figure
{
public:
	int x;
	Circle(int a) {
		x = a;
	}

	double area() {
		return M_PI * x * x;
	}
	void show() override {
		cout << "Circle's area: " << area() << endl;
	}
};