using namespace std;
class Master
{
private:
	string fio;
	static int count;
	Dog* mas;
	Dog* buf;
	int size = 0;
	const int id = 1;

public:
	Master(string fio) {
		setFio(fio);
		count++;
	}
	Master() {
		setFio("");
		count++;
	}
	void setFio(string a) {
		fio = a;
	}
	string getFio() {
		return fio;
	}
	static int getCount() {
		return count;
	}
	static void printCount() {
		cout << "Members in club: " << getCount() << endl;
	}
	void addSize() {
		size++;
	}
	int getSize() {
		return size;
	}
	void addToMas(Dog dog) {
		addSize();
 		buf = new Dog[getSize()];
		for (int i = 0; i < getSize() - 1; i++)
		{
			buf[i] = mas[i];
		}
		for (int i = 0; i < getSize(); i++)
		{
			buf[getSize() - 1] = dog;
		}
		mas = new Dog[getSize()];
		for (int i = 0; i < getSize(); i++)
		{
			mas[i] = buf[i];
		}
	}
	void printInfo() {
		cout << "Name: " << getFio() << endl << "Club id: " << id << endl << getSize() << " dog(s):" << endl;
		for (int i = 0; i < getSize(); i++)
		{
			cout << "Name: " << mas[i].getName() << "\tWeight: " << mas[i].getWeight() << "\tAge: " << mas[i].getAge() << endl;
		}
		cout << endl;
	}
};
int Master::count = 0;