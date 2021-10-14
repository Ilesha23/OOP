#include <iomanip>
using namespace std;
class Persona
{
public:
	string name;
	int age;
	Persona(string n, int a) {
		name = n;
		age = a;
	}
	Persona() {

	}
	virtual void print() = 0;
	virtual int who() = 0;
	virtual int ask() = 0;
	virtual int findTwos() = 0;
};