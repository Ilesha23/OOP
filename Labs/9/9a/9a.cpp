#include <iostream>
#include <vector>
#include "Vars.h"
using namespace std;

int main()
{
	vector<Vars> v1;
	vector<Vars> v2;

	int q = 0;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(Vars(q, i));
		v1.push_back(Vars(q, i));
		q += 2;
	}

	for (int i = 0; i < 5; i++)
	{
		v1[i].getSum() == v2[i].getSum();
	}
}