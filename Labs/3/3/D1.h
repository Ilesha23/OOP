using namespace std;
class D1: public B
{
private:
	int b;
public:
	D1(int x, int y): B(y) {
		b = x;
	}
	void show() override{
		cout << "D1 = " << b << endl; B::show();
	}
};

