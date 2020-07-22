#include <iostream>
using namespace std;

// Generic Masterclass Animal
class Animal
{
public:
    void speak() { cout << "Grrrr" << endl; }
};

// Now create subclass Cat which has all the functionality of an Animal class
// We can also add other functionality to it
class Cat : public Animal // Cat class is inherited from Animal class
{
public:
    void jump() { cout << "Cat jumping ..." << endl; }
};

class Tiger : public Cat // Tiger class is inherited from Cat class
{
public:
    void attackAntelope() { cout << "Tiger attacking antelope ..." << endl; }
};

int main()
{

    cout << "Animal\n=======" << endl;
    Animal a;
    a.speak();

    cout << "\nCat\n=======" << endl;
    Cat cat;
    cat.speak();
    cat.jump();

    cout << "\nTiger\n=======" << endl;
    Tiger tiger;
    tiger.speak();
    tiger.jump();
    tiger.attackAntelope();
    return 0;
}