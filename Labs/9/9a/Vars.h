using namespace std;

class Vars
{
public:
	int a, b, sum;

public:
	Vars() {
		a = b = sum = 0;
	}
	Vars(int q, int w) {
		a = q;
		b = w;
		sum = a + b;
	}

	int getSum() {
		return sum;
	}

	void printSum() {
		cout << sum;
	}

	friend bool operator==(const Vars& ob1, const Vars& ob2);
	friend bool operator<(const Vars& ob1, const Vars& ob2);
	friend bool operator>(const Vars& ob1, const Vars& ob2);
};

bool operator==(const Vars& ob1, const Vars& ob2)
{
	return (ob1.sum == ob2.sum);
}
inline bool operator<(const Vars& ob1, const Vars& ob2)
{
	return (ob1.sum < ob2.sum);
}
inline bool operator>(const Vars& ob1, const Vars& ob2)
{
	return (ob1.sum > ob2.sum);
}
void compare(vector<Vars> vv1, vector<Vars> vv2) {
	for (int i = 0; i < vv1.size(); i++)
	{
		if (vv1[i] == vv2[i])
			cout << i << "   " << vv1[i].getSum() << " == " << vv2[i].getSum() << endl;
		else if (vv1[i] > vv2[i])
			cout << i << "   " << vv1[i].getSum() << " > " << vv2[i].getSum() << endl;
		else if (vv1[i] < vv2[i])
			cout << i << "   " << vv1[i].getSum() << " < " << vv2[i].getSum() << endl;
	}
	cout << endl;
}