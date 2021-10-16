#include <iomanip>
#include <fstream>
using namespace std;
class Write
{
public:
	string str;
	friend ostream& operator<<(ostream& stream, const Write& ob1);
	Write(string s) {
		str = "";
		for (unsigned int i = 0; i < s.length(); i++)
		{
			if (!isdigit(s[i]) && !isupper(s[i]))
			{
				str += s[i];
			}
		}
	}
	void print() {
		cout << str << endl;
	}
};
inline ostream& operator<<(ostream& stream, const Write& ob1)
{
	fstream fout;
	fout.open("B.txt", ios::app);
	fout << ob1.str << endl;
	return fout;
}