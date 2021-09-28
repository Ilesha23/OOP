#include <iomanip>
using namespace std;
class Base
{
public:
	int* x = new int[10];
	Base(){
		srand(time(0));
		for (int i = 0; i < 10; i++)
		{
			x[i] = rand() % 100;
		}
	}
	~Base() {
		delete[] x;
	}
	virtual void show() {
		for (int i = 0; i < 10; i++)
		{
			cout << setw(3) << x[i] << " ";
		}
		cout << endl;
	}
};