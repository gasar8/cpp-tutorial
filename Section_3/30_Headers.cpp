#include <iostream>

// Include header file
#include "utils.h"

using namespace std;

// Initialize function - prototype
void doSomething();

int main()
{
    doSomething();
    doSomethingElse();

    return 0;
}

// Function can then be declared under main!
void doSomething()
{
    cout << "Do something" << endl;
}

// Declared in header file
void doSomethingElse()
{
    cout << "Do something else" << endl;
}