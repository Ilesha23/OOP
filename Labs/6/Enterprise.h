#include <string>
#include <iomanip>
using namespace std;
class Enterprise
{
private:
	string name;
	long account;
	double income;
	int number;

public:
	Enterprise() {
		name = "";
		account = 0;
		income = 0;
		number = 0;
	}
	
	void change(string n, long acc, double inc, int num) {
		name = n;
		account = acc;
		income = inc;
		number = num;
	}
	string getName() { return name; }
	long getAcc() { return account; }
	double getInc() { return income; }
	int getNum() { return number; }
};
void sort(Enterprise* objs, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (objs[i].getName() < objs[j].getName())
			{
				Enterprise temp = objs[i];
				objs[i] = objs[j];
				objs[j] = temp;
			}
		}
	}
}
void print(Enterprise* objs, int num) {
	cout << setw(10) << "Name" << setw(10) << "Account" << setw(10) << "Income" << setw(6) << "Num" << endl;
	cout << setw(36) << "-------------------------------" << endl;
	for (int i = 0; i < num; i++)
	{
		cout <<setw(10)<< objs[i].getName() << setw(10) << objs[i].getAcc() << setw(10) << objs[i].getInc() << setw(6) << objs[i].getNum() << endl;
	}
}