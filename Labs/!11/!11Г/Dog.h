class Dog
{
private:
	string name;
	double weight;
	int age;

public:
	Dog(string name, double weight, int age) {
		setName(name);
		setWeight(weight);
		setAge(age);
	}
	Dog() {
		setName("Unnamed");
		setWeight(0.0);
		setAge(0.0);
	}
	void setName(string name) {
		this->name = name;
	}
	void setAge(int age) {
		this->age = age;
	}
	void setWeight(double weight) {
		this->weight = weight;
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

