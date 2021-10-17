#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;

int main()
{

	fstream f;
	f.open("B.bin", fstream::out | fstream::trunc);
	f.close();

	/*cout << "Print mas b" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl << endl;

	f.open("B.bin", fstream::out | fstream::trunc);
	f.close();*/

	int i = 0;
	int a;
	int b[10];
	int w;
	do
	{
		cout << endl << setw(18) << "Create 0 to 9 - 1" << endl; cout << setw(18) << "Create 1 to 10 - 2" << endl; cout << setw(18) << "Change - 3" << endl; cout << setw(18) << "Show - 4" << endl; cout << setw(18) << "Clear - 5" << endl;
		cout << "> "; cin >> w;
		switch (w)
		{
		case 1:
			f.open("B.bin", fstream::out | fstream::trunc);
			f.close();

			i = 0;

			f.open("B.bin", ios::app | ios::binary);
			cout << "Write to file" << endl;
			for (int i = 0; i < 10; i++)
			{
				f.write((char*)&i, sizeof(i));
				//cout << i << " ";
			}
			//cout << endl << endl;
			f.close();
			system("cls");
			break;
		case 2:
			f.open("B.bin", fstream::out | fstream::trunc);
			f.close();

			i = 0;

			f.open("B.bin", ios::app | ios::binary);
			cout << "Write to file" << endl;
			for (int i = 1; i < 11; i++)
			{
				f.write((char*)&i, sizeof(i));
				//cout << i << " ";
			}
			cout << endl << endl;
			f.close();
			system("cls");
			break;
		case 3:
			f.open("B.bin", ios::in | ios::binary);
			cout << "write to mas b from file" << endl;
			while (!f.eof())
			{
				if (f.peek() == EOF)
				{
					break;
				}
				f.read((char*)&b[i], sizeof(b[i]));
				cout << b[i] << " ";
				i++;
			}
			cout << endl;
			f.close();

			if (b[4] % 2 == 0)
				for (int i = 0; i < 4; i++)
					b[i] = 77;

			if (b[4] % 2 != 0)
				for (int i = 5; i < 10; i++)
					b[i] = 88;
			cout << endl;

			f.open("B.bin", fstream::out | fstream::trunc);
			f.close();


			cout << "Changing mas b\nWrite to file from new mas b" << endl;
			f.open("B.bin", ios::app | ios::binary);
			for (int i = 0; i < 10; i++)
			{
				//a = b[i];
				f.write((char*)&b[i], sizeof(b[i]));
				cout << b[i] << " ";
			}
			cout << endl << endl;
			f.close();
			_getch();
			system("cls");
			break;
		case 4:
			f.open("B.bin", ios::in | ios::binary);
			cout << "Read from file" << endl;
			while (!f.eof())
			{
				if (f.peek() == EOF)
					break;

				f.read((char*)&a, sizeof(a));
				cout << a << " ";
			}
			f.close();
			_getch();
			system("cls");
			break;
		case 5:
			ofstream file("B.bin");
			break;
		
		}
	} while (w <= 5 && w >= 0);

}