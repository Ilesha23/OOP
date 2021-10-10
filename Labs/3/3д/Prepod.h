using namespace std;
class Prepod: public Persona
{
public:
	string discipline;
	int step;
	Prepod(string a, int b) {
		discipline = a;
		step = b;
	}
	int who() override {
		return 1;
	}
	int ask() override {
		return step;
	}
	void print() override {
		cout << "Prepod" << endl;
	}
};