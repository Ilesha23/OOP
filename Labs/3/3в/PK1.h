using namespace std;
class PK1: protected Base
{
protected:
	vector<int> y;

public:
	PK1() {
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] % 7 == 3)
				y.push_back(x[i]);
		}
	}
	void show() override {
		cout << " PK1 mas: ";
		if (y.empty())
		{
			cout << " Empty" << endl;
		}
		else {
			for (int i = 0; i < y.size(); i++)
			{
				cout << setw(3) << y[i] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
};