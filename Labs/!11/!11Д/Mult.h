#include <random>
#include <iomanip>
using namespace std;

class Mult
{
private:
	int* mas;
	int size;

public:
	Mult() {
		srand(time(NULL));
		setSize(10);
		mas = new int[getSize()];
		for (int i = 0; i < getSize(); i++)
		{
			mas[i] = -20 + rand() % (20 + 20);
		}
	}
	Mult(int size, int x, int y) {
		if ((abs(x) + abs(y)) >= size)
		{
			srand(time(NULL));
			setSize(size);
			mas = new int[getSize()];
			bool b = true;
			int a, q = 0;
			do
			{
				a = x + rand() % (y - x + 1);
				for (int i = 0; i < q; i++)
				{
					if (a == mas[i])
					{
						b = false;
						break;
					}
					b = true;
				}
				if (b)
				{
					mas[q] = a;
					q++;
				}
			} while (q < getSize());
		}
		else
		{
			cout << "too small range, created default massive" << endl;
			srand(time(NULL));
			setSize(10);
			mas = new int[getSize()];
			for (int i = 0; i < getSize(); i++)
			{
				mas[i] = -20 + rand() % (20 + 20);
			}
		}
	}
	Mult(const Mult &mult) {
		Mult::setSize(mult.size);
		Mult::mas = new int[getSize()];
		for (int i = 0; i < getSize(); i++)
		{
			Mult::mas[i] = mult.mas[i];
		}
	}
	void setSize(int size) {
		this->size = size;
	}
	int getSize() {
		return size;
	}
	void print() {
		for (int i = 0; i < getSize(); i++)
		{
			cout << setw(3) << mas[i];
		}
		cout << endl;
	}
	int findMax() {
		cout << setw(13) << "Max number: ";
		int buf = mas[0];
		for (int i = 0; i < getSize(); i++)
		{
			if (buf < mas[i])
			{
				buf = mas[i];
			}
		}
		cout << setw(3) << buf << endl;
		return buf;
	}
	void ob(Mult a, Mult b) {
		cout << setw(13) << "Merge: ";
		bool bb = false;
		for (int i = 0; i < a.getSize(); i++)
		{
			cout << setw(3) << a.mas[i];
		}
		for (int i = 0; i < b.getSize(); i++)
		{
			int q = b.mas[i];
			for (int j = 0; j < a.getSize(); j++)
			{
				if (q == a.mas[j])
				{
					bb = false;
					break;
				}
				bb = true;
			}
			if (bb)
			{
				cout << setw(3) << b.mas[i];
			}
		}
		cout << endl;
	}
	void per(Mult a, Mult b) {
		cout << setw(13) << "Crossing: ";
		bool bb = false;
		for (int i = 0; i < b.getSize(); i++)
		{
			for (int j = 0; j < a.getSize(); j++)
			{
				if (b.mas[i] != a.mas[j])
				{
					bb = false;
				}
				else {
					bb = true;
					break;
				}
			}
			if (bb)
			{
				cout << setw(3) << b.mas[i];
			}
		}
		cout << endl;
	}
	void razn(Mult a, Mult b) {
		bool bb = false;
		for (int i = 0; i < a.getSize(); i++)
		{
			for (int j = 0; j < b.getSize(); j++)
			{
				if (a.mas[i] == b.mas[j])
				{
					bb = false;
					break;
				}
				else
				{
					bb = true;
				}
			}
			if (bb)
			{
				cout << setw(3) << a.mas[i];
			}
		}
	}
	void dizz(Mult a, Mult b) {
		cout << setw(13) << "Disjunction: ";
		Mult::razn(a, b);
		Mult::razn(b, a);
	}
};