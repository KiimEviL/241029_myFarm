#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Fruit {
private:
	string mName;
public:
	Fruit(const string& name = "");
	string getName() const;
};

Fruit::Fruit(const string& name) :mName(name) {};
string Fruit::getName() const {
	return mName;
}

class Farm {
private:
	vector<Fruit> mFruits;
public:
	Farm();
	void add(const Fruit& c);
	void allFruits();
};
Farm::Farm() {
	cout << "Farm created!" << endl;
}
void Farm::add(const Fruit& c) {
	mFruits.push_back(c);
}

void Farm::allFruits() {
	for (vector<Fruit>::iterator iter = mFruits.begin(); iter != mFruits.end(); iter++) {
		cout << iter->getName() << endl;
	}
}

int main() {
	Fruit apple("apple");
	cout << apple.getName() << endl;
	Farm f;
	f.add(Fruit("pineapple"));
	f.add(Fruit("melon"));
	f.allFruits();
	return 0;
}