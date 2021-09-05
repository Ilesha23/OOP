#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
using namespace std;

class MyArray
{
private:
	int** arr;
	int** sub;
	int n, m, c = 0, d = 0;
public:
	MyArray(int n_size, int m_size) {
		srand(time(NULL));
		n = n_size;
		m = m_size;
		arr = new int*[n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = new int[m];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				arr[i][j] = 0;
			}
		}
	}

	~MyArray() {
		delete[] arr;
		delete[] sub;
	}

	int getSizeX() const {
		return n;
	}

	int getSizeY() const {
		return m;
	}

	void fillRand() {
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				arr[i][j] = rand() % 100;
			}
		}
	}

	void printArray() {
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << setw(3) << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	void printByCoord(int x, int y) {
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (x > n || y > m)
				{
					break;
				}
				if (i == x && j == y)
				{
					cout << "Number with coords (" << i << "," << j << "): " << arr[i][j] << endl << endl;
				}
			}
		}
		if (x > n || y > m)
		{
			cout << "Too big coord" << endl << endl;
		}
	}

	void printCoordOfMin() {
		int a = arr[0][0];
		int x = 0, y = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a > arr[i][j])
				{
					a = arr[i][j];
					x = i;
					y = j;
				}

			}
		}
		cout << "Minimal number: " << a << " (" << x << "," << y << ")" << endl << endl;
	}

	void replaceByCoord(int x, int y, int z) {
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (x > n || y > m)
				{
					break;
				}
				if (x == i && y == j)
				{
					arr[i][j] = z;
				}
			}
		}
		if (x > n || y > m)
		{
			cout << "Too big coord" << endl << endl;
		}
	}

	void getSubMatrix(int a, int b, int c, int d) {
		//a, b - first coords; c, d - second coords; g - size of new massive; k, l - coords of items in new massive;
		int e, f, g, k, l;
		//e, f - number of rows and cols to find how many items;
		e = c - a + 1;
		f = d - b + 1;
		g = e * f;
		//create massive
		int** mas = new int*[e];
		for (int i = 0; i < e; i++)
		{
			mas[i] = new int[f];
		}
		//getting submatrix
		k = 0, l = 0;
		for (int i = 0; i < n; i++)
		{
			l = 0;
			for (int j = 0; j < m; j++)
			{
				if ((i >= a && i <= c) && (j >= b && j <= d))
				{
					mas[k][l] = arr[i][j];
					l++;
				}
				if (j < b || j > d)
				{
					l = 0;
				}
			}
			if (i >= a && i <= c)
			{
				k++;
			}
			else
			{
				k = 0;
			}
		}

		for (int i = 0; i < e; i++)
		{
			for (int j = 0; j < f; j++)
			{
				cout << setw(3) << mas[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
};













//for (i = 0; i < n; i++)
//{
//	l = 0;
//	for (int j = 0; j < m; j++)
//	{
//		if (j < b || j > d)
//		{
//			l = 0;
//		}
//		if ((i >= a && i <= c) && (j >= b && j <= d))
//		{
//			mas[k][l] = arr[i][j];
//			l++;
//		}
//	}
//	if (i >= a && i <= c)
//	{
//		k++;
//	}
//}







//враиант подматрицы через вектор
/*void gsm(int a, int b, int c, int d) {
		int e, f, g;
		e = c - a + 1;
		f = d - b + 1;
		g = e * f;
		vector<int> subb(0);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (i >= a && i <= c)
				{
					if (j >= b && j <= d)
					{
						subb.push_back(arr[i][j]);
					}

				}
			}
		}
		for (int i = 0; i < g; i++)
		{
			cout << subb[i] << " ";
		}
	}*/




/*MyArray(size_t size) : _sizeX(size) {
		srand(time(NULL));
		_array = new int[_sizeX];
	}*/