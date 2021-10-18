#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream f;
	int a, i = 0;
	int b[10];
	int w;
	do
	{
		cout << endl << setw(18) << "Create 0 to 9 - 1" << endl; cout << setw(18) << "Create 1 to 10 - 2" << endl; cout << setw(18) << "Change - 3" << endl; cout << setw(18) << "Show - 4" << endl; cout << setw(18) << "Exit - 5" << endl;
		cout << "> "; cin >> w;
		switch (w)
		{
		case 1:
			f.open("B.bin", fstream::out | fstream::trunc | fstream::binary);
			if (f.is_open()) {
				i = 0;
				cout << "Write to file" << endl;
				for (int i = 0; i < 10; i++)
				{
					f.write((char*)&i, sizeof(i));
				}
				f.close();
			}
			system("cls");
			break;
		case 2:
			i = 0;
			cout << "Write to file" << endl;
			f.open("B.bin", fstream::out | fstream::trunc | fstream::binary);
			if (f.is_open()) {
				for (int i = 1; i < 11; i++)
				{
					f.write((char*)&i, sizeof(i));
				}
				f.close();
			}
			cout << endl << endl;
			system("cls");
			break;
		case 3:
			cout << "write to mas b from file" << endl;
			f.open("B.bin", fstream::in | fstream::binary);
			if (f.is_open()) {
				int c = 0;
				while (!f.eof())
				{
					if (f.peek() == EOF)
					{
						break;
					}
					f.read((char*)&b[c], sizeof(b[i]));
					cout << b[c] << " ";
					c++;
				}
				c = 0;
				f.close();
			}
			cout << endl;
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
			f.open("B.bin", fstream::app | fstream::binary);
			if (f.is_open()) {
				for (int i = 0; i < 10; i++)
				{
					f.write((char*)&b[i], sizeof(b[i]));
					cout << b[i] << " ";
				}
				f.close();
			}
			cout << endl << endl;
			_getch();
			system("cls");
			break;
		case 4:
			cout << "Read from file" << endl;
			f.open("B.bin", fstream::in | fstream::binary);
			if (f.is_open()) {
				while (true)
				{
					if (f.peek() == EOF)
						break;
					f.read((char*)&a, sizeof(a));
					cout << a << " ";
				}
				f.close();
			}
			_getch();
			system("cls");
			break;
		case 5:
			exit(3);
			break;
		default:
			break;
		}
	} while (w <= 5 && w >= 0);

}