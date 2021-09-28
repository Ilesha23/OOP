#include <string>
#include <iomanip>
using namespace std;
class Library: public Book
{
protected:
	int catalog;
	bool available;

public:
	Library() {
		catalog = 0;
		available = false;
	}
	Library(string n, string a, int p, int c, bool av): Book(n, a, p){
		catalog = c;
		available = av;
	}
	void setAvail(bool a) {
		available = a;
	}
	bool getAvail() {
		return available;
	}
	void show() override {
		Book::show(); cout << setw(10) << catalog << setw(10) << available << endl;
	}
	void took() {
		available = false;
	}
	void returned() {
		available = true;
	}
};