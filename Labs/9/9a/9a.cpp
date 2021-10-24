#include <iostream>
#include <vector>
#include "Vars.h"
using namespace std;

int main()
{
	vector<Vars> v1;
	vector<Vars> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(Vars{ i, i });
		v2.push_back(Vars{ i, i});
	}

	for (int i = 0; i < v1.size(); i++)
	{
		if (v1[i] == v2[i])
			cout << i << "   " << v1[i].getSum() << " == " << v2[i].getSum() << endl;
		else if (v1[i] > v2[i])
			cout << i << "   " << v1[i].getSum() << " > " << v2[i].getSum() << endl;
		else if (v1[i] < v2[i])
			cout << i << "   " << v1[i].getSum() << " < " << v2[i].getSum() << endl;
	}
}