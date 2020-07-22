#include <iostream>
#include "Cat.h"
#include "Animals.h"

using namespace std;

int main()
{

    // Using namespace cats
    {
        using namespace cats;
        Cat cat;
        cat.speak();
    }

    // Using namespace bleban
    {
        using namespace bleban;
        Cat cat;
        cat.speak();
    }

    // Using namespace cats
    cats::Cat cat2;
    cat2.speak();

    // Using namespace bleban
    bleban::Cat cat3;
    cat3.speak();

    cout << "Cat name from bleban: " << bleban::CATNAME << endl;
    cout << "Cat name from cats: " << cats::CATNAME << endl;

    return 0;
}