using namespace std;
class D5 : public D2, private D3
{
private:

public:
	int g;
	D5(int x, int y, int z, int i, int j) : D2(y, z), D3(i, j), B(x) {
		g = x;
	}
	void show() override {
		cout << "D5 = " << g << endl; D2::show(); D3::show();
	}
};

