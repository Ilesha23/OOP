using namespace std;
class D4: private D1, public D2
{
private:
	int e;
public:
	D4(int x, int y, int z, int i, int j) : D1(y, z), D2(i, j) {
		e = x;
	}
	void show_D4() {
		cout << "D4 = " << e << endl; show_D1(); show_D2();
	}
};

