using namespace std;
class B {
private:
	
public:
	int a;
	B(int x) {
		a = x;
		cout << "B" << endl;
	}
	B() {
		//cout << "Default" << endl;
	}
	virtual void show() {
		cout << "B " << endl;
	}
};