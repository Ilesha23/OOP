#include <vector>
using namespace std;
class VUZ
{
public:
	Persona** Shtat;
	int size = 0;
	VUZ() {
		Shtat = new Persona * [6];
		Shtat[0] = new Prepod[1]{ { "Petr", 30, "Math", 1} };
		Shtat[1] = new Prepod[1]{ {"Vasiliy", 55, "English", 2} };
		Shtat[2] = new Student[1]{ {"Vlad", 21} };
		Shtat[3] = new Student[1]{ {"Borya", 20} };
		Shtat[4] = new Student[1]{ {"Misha", 19} };
		Shtat[5] = new Zav_kaf[1]{ {"Aleksandr", 50, "position"} };
		size = 6;
	}
	~VUZ() {
		delete[] Shtat;
	}
	void addElem() {
		cout << "Prepod - 1\nStudent - 2\nZav kaf - 3\nEnter: ";
		int a; cin >> a;
		string q, w;
		int e, r;
		switch (a)
		{
		case 1:
			cout << "Name: "; cin >> q; cout << "Age: "; cin >> e; cout << "Discipline: "; cin >> w; cout << "Step: "; cin >> r;
			Shtat[size] = new Prepod[1]{ { q, e, w, r } };
			size++;
			break;
		case 2:
			cout << "Name: "; cin >> q; cout << "Age: "; cin >> e;
			Shtat[size] = new Student[1]{ {q, e} };
			size++;
			break;
		case 3:
			cout << "Name: "; cin >> q; cout << "Age: "; cin >> e; cout << "Position: "; cin >> w;
			Shtat[size] = new Zav_kaf[1]{ {q, e, w} };
			size++;
			break;
		default:
			break;
		}
	}
	void print() {
		for (int i = 0; i < size; i++)
		{
			Shtat[i]->print();
		}
	}
	void print50() {
		for (int i = 0; i < size; i++)
		{
			if (Shtat[i]->who()==1 && Shtat[i]->age > 50)
			{
				Shtat[i]->print();
			}
		}
	}
	void printStud2() {
		cout << endl;
		int q = 0;
		for (int i = 0; i < size; i++)
		{
			if (Shtat[i]->who() == 3 && Shtat[i]->findTwos() > 0)
			{
				cout << Shtat[i][0].name << ", ";
				q++;
			}
		}
		if (q==0)
			cout << "No students" << endl;
	}
	void printByNum(int num) {
		bool q = true;
		for (int i = 0; i < size; i++)
		{
			if (i == num - 1)
			{
				Shtat[i]->print();
				q = false;
			}
		}
		if (q)
			cout << "No element" << endl;
	}
	void printWho(int num) {
		bool q = true;
		for (int i = 0; i < size; i++)
		{
			if (i == num - 1)
			{
				if (Shtat[i]->who() == 1)
					cout << "Prepod" << endl;
				if (Shtat[i]->who() == 2)
					cout << "Zav kaf" << endl;
				if (Shtat[i]->who() == 3)
					cout << "Student" << endl;
				q = false;
			}
		}
		if (q)
			cout << "No element" << endl;
	}
	void printAsk(int num) {
		bool q = true;
		for (int i = 0; i < size; i++)
		{
			if (i == num - 1)
			{
				Shtat[i]->ask();
				q = false;
			}
		}
		if (q)
			cout << "No element" << endl;
	}
};