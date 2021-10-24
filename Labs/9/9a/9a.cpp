#include <iostream>
#include <vector>
#include "Vars.h"
using namespace std;

int main()
{
	vector<Vars> v1;
	vector<Vars> v2;

	for (int i = 0; i < 5; i++)
	{
		v1.push_back(Vars{ i, i });
		v2.push_back(Vars{ i, i});
	}
	compare(v1, v2);

	v1.clear();
	v2.clear();
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(Vars{ i+1, i*2 });
		v2.push_back(Vars{ i, i });
	}
	compare(v1, v2);

	v1.clear();
	v2.clear();
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(Vars{ i, i });
		v2.push_back(Vars{ i+1, i*2 });
	}
	compare(v1, v2);
}