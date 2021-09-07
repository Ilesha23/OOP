#include "Dog.h"
class Master
{
private:
	string fio;
	const int ID = 1;
	static int counter;
	Dog* mas;

public:
	Master(string fio, Dog ...) {

	}
	void setFio(string fio) {
		this->fio = fio;
	}

};

