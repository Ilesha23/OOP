using namespace std;
class D3: private B
{
private:
	int d;
public:
	D3(int x, int y) : B(x) {
		d = x;
	}
	void show_D3() {
		cout << "D3 = " << d << endl; show_B();
	}
};

