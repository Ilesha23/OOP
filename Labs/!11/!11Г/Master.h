#include <string.h>
using namespace std;
class Master
{
private:
	string fio;
	static int count;
	

public:
	const int id = 1;
	Master(string fio) {
		setFio(fio);
		count++;
	}
	void setFio(string fio) {
		this->fio = fio;
	}
	int getCount() {
		return count;
	}
};

int Master::count = 0;
