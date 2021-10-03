#define N 100

#include <iostream>
#include <iomanip>
#include <vector>
#include "Base.h"
#include "PK1.h"
#include "PK2.h"
using namespace std;

int main()
{
	Base a;
	a.show();
	PK1 b;
	b.show();
	PK2 c;
	c.show();
	c.showBoth();

	return 0;
}