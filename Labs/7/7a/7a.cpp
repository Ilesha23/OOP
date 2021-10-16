#include <iostream>
#include <fstream>
#include "Comp.h"
using namespace std;

int main()
{
	double mas[10];
	Comp arr[5];
	read(mas, "A.txt");
	for (int i = 0; i < 10; i++)
	{
		cout << mas[i] << endl;
	}
	cout << endl;
	int j = 0;
	for (int i = 0; i < 10;)
	{
		arr[j] = Comp(mas[i], mas[i+1]);
		arr[j].print();
		write(arr[j], "B.txt");
		j++;
		i += 2;
	}
}