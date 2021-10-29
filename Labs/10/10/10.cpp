#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

template<typename T>
T min1(T first, T second) {
	assert(!isdigit(first) && !isdigit(second) && "Not a digit");
	assert(first < second);
	if (first < second)
		return first;
	else return second;
}

template<typename T>
T sort(vector<T> mas) {
	
}

int main()
{
	int a = 5;
	int b = 6;
	cout << min1(a, b) << endl;

	/*char c = 'q';
	char d = 'w';
	cout << min1(c, d) << endl;*/

	vector<int> arr = { 6, 5, 4, 3, 2 };


}