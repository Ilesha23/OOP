using namespace std;
class D3 : virtual public B
{
private:

public:
	int d;
	D3(int x, int y) : B(y) {
		d = x;
	}
	void show() override {
		cout << "D3 = " << d << endl; B::show();
	}
};

