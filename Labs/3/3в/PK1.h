#include <iomanip>
using namespace std;
class PK1: public Base
{
public:
	int* y;
	PK1() {
		for (int i = 0; i < 10; i++)
		{
			x[i] = 1;
		}
	}
	void show() override {
		for (int i = 0; i < 10; i++)
		{
			cout << setw(3) << x[i] << " ";
		}
		cout << endl;
	}
};