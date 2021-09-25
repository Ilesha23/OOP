using namespace std;
class B {
private:
	int a;
public:
	B(int x) {
		a = x;
	}
	virtual void show() {
		cout << "B = " << a << endl;
	}
};