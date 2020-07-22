#include <iostream>
using namespace std;

class Animal
{
private:
    string name;

public:
    Animal() { cout << "Animal created. " << endl; };
    Animal(const Animal &other) : name(other.name) { cout << "Animal created by copying. " << endl; };
    void setName(string name) { this->name = name; };
    void speak() const { cout << "My name is: " << name << "\n" << endl; }
};

int main()
{

    Animal animal1;
    animal1.setName("Freddy");
    animal1.speak();

    Animal animal2 = animal1;
    animal2.setName("Bob");
    animal2.speak();

    Animal animal3(animal2);
    animal3.speak();

    return 0;
}