using namespace std;
class D1: public B
{
private:
	int b;
public:
	D1(int x, int y): B(x) {
		b = x;
	}
	void show_D1() {
		cout << "D1 = " << b << endl; show_B();
	}
};

