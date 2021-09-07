#include <math.h>
#include <corecrt_math_defines.h>
using namespace std;
class Figure
{
private:
	double r, a, b, c;
public:
	Figure(double r = 0.0, double a = 0.0, double b = 0.0, double c = 0.0) {
		setR(r);
		setA(a);
		setB(b);
		setC(c);
	}

	void setR(double r) {
		this->r = r;
	}
	void setA(double a) {
		this->a = a;
	}
	void setB(double b) {
		this->b = b;
	}
	void setC(double c) {
		this->c = c;
	}
	double getR() {
		return r;
	}
	double getA() {
		return a;
	}
	double getB() {
		return b;
	}
	double getCc() {
		return c;
	}

	double area() {
		if (r == 0.0)
		{
			double p = ((getA() + getB() + getCc()) / 2);
			double q = p * (((p - getCc()) * p - getA()) * (p - getB()));
			double s = sqrt(q);
			return s;
		}
		if (r != 0.0) {
			double s = M_PI * getR() * getR();
			return s;
		}
	}
};

