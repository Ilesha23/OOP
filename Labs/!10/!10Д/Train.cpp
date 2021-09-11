//#include <string>
#include <iostream>
//#include <algorithm>
using namespace std;
class Train {

private:
	string destination;
	int number;
	int departureTime;

public:
	void setDest(string destination) {
		this->destination = destination;
	}
	void setNum(int number) {
		this->number = number;
	}
	void setDep(int departureTime) {
		this->departureTime = departureTime;
	}

	string getDest() {
		return destination;
	}
	int getNumber() {
		return number;
	}
	int getDep() {
		return departureTime;
	}

	Train(string destination, int number, int departureTime) {
		setDest(destination);
		setNum(number);
		setDep(departureTime);
	}
	Train() {
		setDest("");
		setNum(0);
		setDep(0);
	}

	void printElem() {
			cout << "destination - " << getDest() << endl;
			cout << "number - " << getNumber() << endl;
			cout << "departure time - " << getDep() << endl << endl;
	}

	void printNum(Train mas[], int x) {
		for (int i = 0; i < 5; i++)
		{
			if (mas[i].getNumber() == x)
			{
				mas[i].printElem();
			}
		}
	}

	void printMas(Train mas[]) {
		system("cls");
		for (int i = 0; i < 5; i++)
		{
			cout << "destination - " << mas[i].getDest() << endl;
			cout << "number - " << mas[i].getNumber() << endl;
			cout << "departure time - " << mas[i].getDep() << endl;
			cout << endl;
		}
		
	}

	void swap(Train& a, Train& b) {
		Train buf = a;
		a = b;
		b = buf;
	}

	void sortSwap(Train mas[]) {
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4 - i; j++)
			{
				
				if (mas[j].getDest() > mas[j + 1].getDest())
				{
					swap(mas[j], mas[j + 1]);
				}
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (mas[i].getDep() > mas[i + 1].getDep() && mas[i].getDest() == mas[i + 1].getDest())
			{
				swap(mas[i], mas[i + 1]);
			}
		}
	}
};










//void sortMas(Train mas[]) {
//	sort(mas, mas + 5, [](Train& a, Train& b) -> bool {
//		return a.getDest() < b.getDest();
//		});
//	/*for (int i = 0; i < 5; i++)
//	{
//		if (mas[i].getDest() == mas[i + 1].getDest())
//		{
//			if (mas[i].getDep() > mas[i + 1].getDep())
//			{
//				Train a = mas[i];
//				mas[i] = mas[i + 1];
//				mas[i + 1] = a;
//			}
//		}
//	}*/
//}

//void sortMas(Train mas[]) {
//	sort(mas, mas + 5, [](Train& a, Train& b) -> bool {
//		return a.getDest() < b.getDest();
//		});
//}