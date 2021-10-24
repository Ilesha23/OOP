using namespace std;

template<class T>
class Array
{
public:
	T* mas;
	int s, ind;

public:
	Array() {
		s = 10;
		mas = new T[s];
		ind = 0;
	}
	~Array() {
		delete mas;
	}
	int size() {
		return s;
	}
	void fillElem(T a, int idx) {
		mas[idx] = a;
	}
	double sum() {
		double a = 0.0;
		for (size_t i = 0; i < size(); i++)
		{
			a += mas[i];
		}
		return a;
	}
	double avg() {
		return sum() / size();
	}
	void print() {
		for (int i = 0; i < size(); i++)
		{
			cout << mas[i] << "  ";
		}
	}
	T& operator[](const int a);
};

template<class T>
inline T& Array<T>::operator[](const int a)
{
	T e = mas[0];
	for (size_t i = 0; i < size(); i++)
		if (e < mas[i])
			e = mas[i];
	return e;
}
