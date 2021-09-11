using namespace std;
class Complex
{
private:
	int r, m;

public:
	Complex() {
		setR(0);
		setM(0);
	}
	Complex(int r, int m) {
		setR(r);
		setM(m);
	}
	void setR(int r) {
		this->r = r;
	}
	int getR() {
		return r;
	}
	void setM(int m) {
		this->m = m;
	}
	int getM() {
		return m;
	}
	void addToR(int x) {
		r += x;
	}
	void addToM(int x) {
		m += x;
	}
	void sum(Complex a) {
		Complex::r += a.getR();
		Complex::m += a.getM();
	}
	void print() {
		cout << getR() << " + " << getM() << "i" << endl;
	}
};

