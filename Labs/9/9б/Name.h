using namespace std;

class Name
{
public:
	string name;
	Name() { name = ""; }
	Name(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
	Name operator = (Name& a) {
		name = a.name;
	}
	friend bool operator ==(const Name& a, const Name& b);
	friend bool operator < (const Name& a, const Name& b);
	friend ostream& operator << (ostream& stream, const Name& a);
};

inline bool operator == (const Name& a, const Name& b) {
	return a.name == b.name;
}
inline bool operator<(const Name& a, const Name& b){
	/*if (a.name == b.name)
		return (a.name < b.name) ? true : false;
	return (a.name < b.name) ? true : false;*/
	if (a.name < b.name)
		return true;
	else return false;
}

inline ostream& operator<<(ostream& stream, const Name& a)
{
	stream << a.name;
	return stream;
}

struct Comparator
{
	using is_transparent = std::true_type;
	bool operator()(const Name& a, const Name& b) const { return a.name < b.name; }
};