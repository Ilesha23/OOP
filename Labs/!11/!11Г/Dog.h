#include <string>
using namespace std;
class Dog
{
private:
	string name;
	double weight;
	int age;

public:
	Dog() {
		setName("");
		setWeight(0.0);
		setAge(0);
	}
	Dog(string name, double weight, int age) {
		setName(name);
		setWeight(weight);
		setAge(age);
	}
	void setName(string name) {
		this->name = name;
	}
	void setWeight(double weight) {
		this->weight = weight;
	}
	void setAge(int age) {
		this->age = age;
	}
	string getName() {
		return name;
	}
	double getWeight() {
		return weight;
	}
	int getAge() {
		return age;
	}
};