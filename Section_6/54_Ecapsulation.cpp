#include <iostream>
using namespace std;

class Frog
{
private:
    string name;

private:
    // It is common in C++ to declare multiple privates and publics (separate instance data from methods)
    string getName() { return name; }

public:
    Frog(string name) : name(name) {}
    void info() { cout << "My name is: " << getName() << endl; }
};

int main()
{

    Frog frog("Freddy");
    frog.info(); // You can only access methods which are in public section of classes
                 // Can't for example call ```cout << frog.getName() << endl;```
                 // !!! Make anything private that you can !!!

    return 0;
}