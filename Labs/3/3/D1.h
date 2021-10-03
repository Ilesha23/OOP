using namespace std;
class D1 : virtual public B
{
private:

public:
	int b;
	D1(int x, int y) : B(y) {
		b = x;
	}
	void show() override {
		cout << "D1 = " << b << endl; B::show();
	}
};