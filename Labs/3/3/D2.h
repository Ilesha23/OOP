using namespace std;
class D2: virtual public B
{
private:
	
public:
	int c;
	D2(int x, int y) : B(y) {
		c = x;
		//cout << "D2" << endl;
	}
	void show() override {
		cout << "D2 = " << c << endl; B::show();
	}
};

