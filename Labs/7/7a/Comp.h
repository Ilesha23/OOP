#include <fstream>
using namespace std;
class Comp
{
public:
	double a, b;
	Comp(double q, double w) {
		a = q;
		b = w;
	}
	Comp() {}
	void print() {
		cout << a << " + i" << b << endl;
	}
	
};
void write(Comp& ob, string name) {
	fstream fout;
	fout.open(name, ios::app);
	fout << ob.a;
	fout << " + i";
	fout << ob.b;
	fout << endl;
}
double read(double* mass, string name) {
	double K;
	int n = 0;
	ifstream fin(name);
	while (fin >> K)
	{
		mass[n++] = K;
	}
	return *mass;
}