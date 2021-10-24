using namespace std;

class Vars
{
private:
	int a, b, sum;

public:
	Vars() {
		a = b = sum = 0;
	}
	Vars(int q, int w) {
		a = q;
		b = w;
		sum = a + b;
	}

	int getSum() {
		return sum;
	}

	void printSum() {
		cout << sum;
	}

	friend bool operator==(const Vars& ob1, const Vars& ob2);
};

bool operator==(const Vars& ob1, const Vars& ob2)
{
	return (ob1.sum == ob2.sum);
}