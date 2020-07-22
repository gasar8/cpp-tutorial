#include <iostream>
using namespace std;

class Animal
{
private:
    string name;

public:
    Animal()
    {
        cout << "Animal created. " << endl;
    }

    ~Animal()
    {
        cout << "Destructor called." << endl;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void speak() const
    {
        cout << "My name is: " << name << "\n" << endl;
    }
};

Animal *createAnimal()
{
    Animal *pAnimal = new Animal();
    pAnimal->setName("Bertie");
    return pAnimal;
}

int main()
{
    Animal *pFrog = createAnimal();
    pFrog->speak();
    delete pFrog;

    return 0;
}