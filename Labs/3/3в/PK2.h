using namespace std;
class PK2: protected PK1
{
protected:
	vector<int> z;

public:
	PK2() {
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] % 5 == 2)
				z.push_back(x[i]);
		}
	}
	void show() override {
		cout << " PK2 mas: ";
		if (z.empty())
		{
			cout << " Empty" << endl;
		}
		else {
			for (int i = 0; i < z.size(); i++)
			{
				cout << setw(3) << z[i] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	void showBoth() {
		cout << " Both conditions: ";
		bool a = true;
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] % 7 == 3 && x[i] % 5 == 2)
			{
				cout << setw(3) << x[i] << " ";
				a = false;
			}
		}
		if (a)
			cout << "Empty" << endl;
		cout << endl << endl;
	}
};