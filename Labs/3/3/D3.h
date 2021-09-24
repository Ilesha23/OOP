using namespace std;
class D3: private B
{
private:
	int d;
public:
	D3(int x, int y) : B(y) {
		d = x;
	}
	void show() override {
		cout << "D3 = " << d << endl; B::show();
	}
};

