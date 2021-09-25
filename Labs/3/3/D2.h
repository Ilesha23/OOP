using namespace std;
class D2: virtual private B
{
private:
	int c;
public:
	D2(int x, int y) : B(y) {
		c = x;
	}
	void show() override {
		cout << "D2 = " << c << endl; B::show();
	}
};

