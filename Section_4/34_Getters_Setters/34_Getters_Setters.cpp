#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person person;
    cout << person.toString() << endl;

    person.setName("Georgina");
    cout << "Name of person with get method: " << person.getName() << endl;

    return 0;
}
