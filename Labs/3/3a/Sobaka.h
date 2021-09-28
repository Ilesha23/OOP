using namespace std;
class Sobaka {
protected:
	double weight;
	int age;

public:
	Sobaka() {
		weight = 5.0;
		age = 5;
		cout << "Sobaka constructor: weight - " << weight << "	age - " << age << endl;
	}
	Sobaka(double w, int a) {
		weight = w;
		age = a;
		cout << "class Sobaka: " << w << "  " << a << endl;
	}
	~Sobaka() {
		cout << "Sobaka destructor" << endl;
	}
	void golos() {
		if (weight >= 10)
			cout << "GAV" << endl;
		else
			cout << "gav" << endl;
	}
};