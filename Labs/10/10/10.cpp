#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

template<typename T>
T min1(T first, T second) {
	assert(!isdigit(first) && !isdigit(second) && "Not a digit");
	if (first < second)
		return first;
	else return second;
}

template<typename T>
void sort1(vector<T> &mas) {
	for (int i = 0; i < mas.size(); i++)
		for (int j = i + 1; j < mas.size(); j++)
			if (mas[i] > mas[j])
				swap(mas[i], mas[j]);
}

template<typename T>
T sum1(vector<T> mas) {
	T a = 0;
	for (int i = 0; i < mas.size(); i++)
		if (mas[i] > 0)
			a += mas[i];
	return a;
}

int main()
{
	//MIN
	int a = 5;
	int b = 6;
	cout << "Min is: " << min1(a, b) << endl << endl;
	assert(min1(a, b) == a && "a is not lower than b");

	//SORT
	vector<int> arr1 = { 2, 1, 0, -1, -2 };
	vector<int> arr2 = { -2, -1, 0, 1, 2 };
	sort1(arr1);
	for (int i = 0; i < arr1.size(); i++)
	{
		cout << arr1[i] << "  ";
		assert(arr1[i] == arr2[i] && "Not sorted right");
	}
	cout << endl << endl;

	//SUM
	cout << "Sum is: " << sum1(arr2) << endl;
	assert(sum1(arr2) == 3 && "Sum is wrong");

}