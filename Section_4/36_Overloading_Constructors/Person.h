#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person();
    Person(string newName) {name = newName; age = 0;}; // Note that implementation (body of constructor) could also be done in .cpp file -> see next line!
    Person(string newName, int newAge);
    string toString();
};

#endif /* PERSON_H_ */