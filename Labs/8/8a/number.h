#include <fstream>
using namespace std;

template<class T>
class number
{
public:
	T num;
	number() {
		num = 0;
	}
	number(T a) {
		num = a;
	}

	template<class T>
	friend ostream& operator << (ostream& , number<T>& );
	template<class T>
	friend istream& operator >> (istream&, number<T>&);

};

template <class T>
ostream& operator<<(ostream& stream, number<T>& a)
{
	stream << a.num;
	return stream;
}
template <class T>
istream& operator>>(istream& stream, number<T>& a)
{
	stream >> a.num;
	return stream;
}

template<class T>
number<T> operator / (number<T>& a, number<T>& b)
{
	T c = a.num / b.num;
	return c;
}
template<class T>
number<T> operator * (number<T>& a, number<T>& b)
{
	T c = a.num * b.num;
	return c;
}
template<class T>
number<T> operator + (number<T>& a, number<T>& b)
{
	T c = a.num + b.num;
	return c;
}
template<class T>
number<T> operator - (number<T>& a, number<T>& b)
{
	T c = a.num - b.num;
	return c;
}