using namespace std;
class D2: private B
{
private:
	int c;
public:
	D2(int x, int y) : B(x) {
		c = x;
	}
	void show_D2() {
		cout << "D2 = " << c << endl; show_B();
	}
};

