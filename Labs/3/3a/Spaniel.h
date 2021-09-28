#include <string>
using namespace std;
class Spaniel : public Sobaka {
private:
	string color;

public:
	Spaniel() {
		cout << "No info" << endl;
	}
	Spaniel(double w, int a, string c) {
		weight = w;
		age = a;
		color = c;
		cout << "Spaniel constructor: weight - " << weight << "		age - " << age << "		color - " << color << endl;
	}
	~Spaniel() {
		cout << "Spaniel destructor" << endl;
	}
};