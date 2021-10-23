#include <iostream>
#include <iomanip>
#include <bitset>
#include <vector>
using namespace std;

int main()
{
	vector<int> a;
	srand(time(NULL));
	for (int i = 0; i < 256; i++)
	{
		a.push_back(rand() % 1000);
	}
	cout << setw(10) << "DEC" << setw(10) << "HEX" << setw(10) << "OCT" << setw(13) << "BIN" << endl << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << setw(10) << a[i] << setw(10) << hex << a[i] << setw(10) << oct << a[i] << setw(15) << bitset<8>(a[i]) << endl;
	}
}