#include <string>
using namespace std;
class Spaniel : public Sobaka {
private:
	string color;

public:
	Spaniel() {
		cout << "No info" << endl;
	}
	Spaniel(string c) {
		color = c;
		cout << "Spaniel constructor: color - " << color << endl;
	}
	~Spaniel() {
		cout << "Spaniel destructor" << endl;
	}
};