#include <sstream>
#include "Person.h"

// Constructor
Person::Person()
{
    name = "undefined";
    age = 0;
}

Person::Person(string newName, int newAge)
{
    name = newName;
    age = newAge;
}

string Person::toString()
{
    stringstream ss;

    ss << "Person's name: ";
    ss << name;
    ss << "; age: ";
    ss << age;

    return ss.str();
}