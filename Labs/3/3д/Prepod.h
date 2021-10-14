using namespace std;
class Prepod: public Persona
{
public:
	string discipline;
	int step;
	Prepod(string name, int age, string a, int b): Persona(name, age) {
		this->discipline = a;
		this->step = b;
	}
	Prepod(string n, int a) : Persona(n, a) {

	}
	Prepod(){}
	
	int who() override {
		return 1;
	}
	int ask() override {
		cout << "Step: " << step << endl;
		return step;
	}
	void print() override {
		cout << endl;
		cout << setw(12) << "Prepod: " << name << endl;
		cout << setw(12) << "Age: " << age << endl;
		cout << setw(12) << "Discipline: " << discipline << endl;
		cout << setw(12) << "Step: " << step << endl;
	}
	int findTwos() { return 0; }
};