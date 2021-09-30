class Triangle: public Figure
{
public:
	int x, y, z;
	Triangle(int a, int b, int c) {
		if ((a + b) > c && (b + c) > a && (a + c) > b)
		{
			x = a;
			y = b;
			z = c;
		}
		else
		{
			cout << "Created default triangle" << endl;
			x = 2;
			y = 2;
			z = 2;
		}
	}
	Triangle() {
		cout << "Created default triangle" << endl;
		x = 2;
		y = 2;
		z = 2;
	}
	double area() {
		double p = (x + y + z) / 2;
		double q = sqrt((p - x) * (p - y) * (p - z));
		return q;
	}
	void show() override {
		cout << "Triangle's area: " << area() << endl;
	}
};