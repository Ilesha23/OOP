using namespace std;
class D4: private D1, public D2
{
private:
	int e;
public:
	D4(int x, int y, int z, int i, int j) : D1(y, z), D2(i, j) {
		e = x;
	}
	void show() override {
		cout << "D4 = " << e << endl; D1::show(); D2::show();
	}
};

