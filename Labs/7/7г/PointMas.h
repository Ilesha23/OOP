using namespace std;
class PointMas
{
public:
	vector<Point> mas;
	ofstream fout;
	ifstream fin;
	string path = "A.txt";

	PointMas() {}

	void fillGnerate(int number) {
		for (int i = 0; i < number; i++)
		{
			mas.push_back(Point(i, (i + 1) * 2 - 1));
		}
	}

	void fillManually(int number) {
		int x, y;
		for (int i = 0; i < number; i++)
		{
			cout << "X, Y: "; cin >> x >> y;
			mas.push_back(Point(x, y));
		}
	}

	void writeAllToFile(string filename) {
		fout.open(filename, ofstream::out | ofstream::app);
		if (!fout.is_open())
		{
			cout << "Error!" << endl;
			return;
		}
		else {
			for (int i = 0; i < mas.size(); i++)
			{
				fout.write((char*)&mas[i], sizeof(Point));
			}
		}
		fout.close();
	}

	void writeOneToFile(string filename, int n) {
		if (n < 0 || n >= mas.size())
		{
			cout << "Wrong number!" << endl;
			return;
		}
		fout.open(filename, ofstream::out | ofstream::app);
		if (!fout.is_open())
		{
			cout << "Error!" << endl;
			return;
		}
		else {
			fout.write((char*)&mas[n], sizeof(Point));
		}
		fout.close();
	}

	void readAllFromFile(string filename) {
		fin.open(filename);
		if (!fin.is_open() || fin.peek() == EOF)
		{
			cout << "Error, or file is empty!" << endl;
		}
		else {
			Point p;
			while (fin.read((char*)&p, sizeof(p)))
			{
				p.printPoint();
			}
		}
		fin.close();
	}

	void readOneFromFile(string filename, int n) {
		int nn = -1;
		if (n < 0 || n >= mas.size())
		{
			cout << "Wrong number!" << endl;
			return;
		}
		fin.open(filename);
		if (!fin.is_open())
		{
			cout << "Error!" << endl;
		}
		else {
			Point p;
			while (fin.read((char*)&p, sizeof(p)) && nn <= n)
			{
				nn++;
				if (nn == n)
				{
					cout << n - 1; p.printPoint();
				}
			}
		}
		fin.close();
	}

	void clearFile(string filename) {
		fout.open(filename, ofstream::out | ofstream::trunc);
		fout.close();
	}

	void print() {
		for (int i = 0; i < mas.size(); i++)
		{
			cout << i << setw(6) << "X: " << mas[i].getX() << setw(6) << "Y: " << mas[i].getY() << endl;
		}
	}
};