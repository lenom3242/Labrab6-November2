#include <iostream>

using namespace std;

class Animal {
protected:
	string name;
	int age;

public:
	Animal(string name = "Animal", int age = 1) : name(name), age(age) {}

	void voice(int questionmark) {
		cout << "My name is " << name;
		for (int i = 0; i < questionmark; i++)
			cout << "?";

	}
};
class Cat : virtual public Animal {
protected:
	string catname;
	int trickery;
public:
	void voice(int meow) {
		cout << "My name is " << catname;
		for (int i = 0; i < meow; i++)
			cout << " Meow!";
		cout << endl;
	}
	Cat(string name = "Barsik", int age = 1, int trickery = 100) : catname(name), trickery(trickery), Animal("Ivanovi", age) { }
};
class Dog : virtual public Animal {
protected:
	string dogname;
	int loyalty;
public:
	void voice(int bark) {
		cout << "My name is " << dogname;
		for (int i = 0; i < bark; i++)
			cout << " Bark!";
		cout << endl;
	}
	Dog(string name = "Sharik", int age = 1, int loyalty = 100) : dogname(name), loyalty(loyalty), Animal("Ivanovi",age) { }
};
class CatDog : public Cat, public Dog {
public:
	void information() {
		cout << "Cat's name: " << catname << endl << "Dog's name: " << dogname << endl << "Cat's age: " << Cat::age << " Dog's age: " << Dog::age << "\nChance of trickery: " << Cat::trickery
			<< " Chance of betrayal:" << Dog::loyalty << endl;
		cout << "Allname:" << name << endl;
		
	}
	CatDog(string allname = "Ivanova",string catname = "Barsik", int catage = 1, int trickery = 100, string dogname = "Sharik", int dogage = 1, int loyalty = 100) : Cat(catname, catage, trickery), Dog(dogname, dogage, loyalty), Animal(allname, catage) {}
};
void main() {
	CatDog combined("Ivanoviiiii", "Murzik", 2, 87, "Sharik", 2, 98);
	combined.information();
	combined.Cat::voice(6);
	combined.Dog::voice(6);
	Cat stat("Barsik", 2, 0);
	Dog stat2("Sharik", 5, 0);
}