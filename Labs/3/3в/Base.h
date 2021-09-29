using namespace std;
class Base
{
protected:
	vector<int> x;

public:
	Base(){
		srand(time(0));
		for (int i = 0; i < N; i++)
		{
			x.push_back(rand() % 100);
		}
	}
	virtual void show() {
		cout << "Base mas: ";
		for (int i = 0; i < x.size(); i++)
		{
			cout << setw(3) << x[i] << " ";
		}
		cout << endl;
	}
};