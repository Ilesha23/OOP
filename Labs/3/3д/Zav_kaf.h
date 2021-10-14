class Zav_kaf : public Prepod
{
public:
	string pos;
	Zav_kaf(string n, int a, string p):Prepod(n, a) {
		pos = p;
	}
	Zav_kaf(){}
	void print() override {
		cout << endl;
		cout << setw(12) << "Zav kaf: " << name << endl;
		cout << setw(12) << "Age: " << age << endl;
		cout << setw(12) << "Position: " << pos << endl;
	}
	int who() override {
		return 2;
	}
	int ask() override {
		cout << "Age: " << age << endl;
		return age;
	}
	int findTwos() { return 0; }
};