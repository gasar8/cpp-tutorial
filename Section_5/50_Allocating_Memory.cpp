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
        cout << "\nDestructor called." << endl;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void speak() const
    {
        cout << "My name is: " << name << endl;
    }

    void alphabet(char c)
    {
        while (c != 'z' + 1)
        {
            cout << c << endl;
            c++;
        }
    }
};

class Person
{
private:
    int name;

public:
    void setChar(int i, char c)
    {
        string name(i, c);
        cout << "Name of person " << i << ":\t" << name << endl;
    }
};

int main()
{
    // int *pInt = new int;
    // *pInt = 8;
    // cout << *pInt << endl;
    // delete pInt;
    {
        Animal *pAnimal = new Animal[10];

        string names[10] = {"Alice", "Bob", "Clement", "Dan", "Eugene", "Frank", "George", "Hugh", "Ian", "Jake"};

        for (int i = 0; i < sizeof(names) / sizeof(string); i++)
        {
            pAnimal[i].setName(names[i]);
            pAnimal[i].speak();
        }

        delete[] pAnimal;
    }
    // char *pMem = new char[1000];
    // delete [] pMem;

    // Homework 1: alphabet
    cout << "\nHomework version 1." << endl;
    cout << "====================================" << endl;
    Animal alphabet;
    alphabet.alphabet('a');

    // Homework 2: alphabet
    cout << "\nHomework version 2." << endl;
    cout << "====================================" << endl;
    Person *pAlphabet = new Person[26];

    char c = 'a';
    for (int i = 0; i < 26; i++, c++)
        pAlphabet[i].setChar(i + 1, c);
    delete[] pAlphabet;

    return 0;
}