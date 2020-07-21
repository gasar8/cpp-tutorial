#include <iostream>
using namespace std;

void manipulate(double *pValue)
{
    cout << "2. Value of double in manipulate: " << *pValue << endl;
    *pValue = 10.0;
    cout << "3. Value of double in manipulate: " << *pValue << endl;
}

void memoryCheck(int *pValue1)
{
    // What happens if you pass the address of int value and implicitly change type to double?
    // See last comment!
    cout << "2. Value of int in manipulate: " << *pValue1 << endl;
    *pValue1 = 7.33; // Change value to double type
    cout << "3. Value of int in manipulate: " << *pValue1 << endl;
}

int main()
{
    int nValue = 8;

    int *pnValue = &nValue;

    cout << "Int value: " << nValue << endl;
    cout << "Pointer to int address: " << pnValue << endl;
    cout << "Int value via pointer: " << *pnValue << endl;
    cout << "\n==========================================\n" << endl;

    // Using manipulate function
    double dValue = 123.4;

    cout << "1. dValue: " << dValue << endl;
    manipulate(&dValue);
    cout << "4. dValue: " << dValue << endl;
    cout << "\n==========================================\n" << endl;

    // Using my memoryCheck function
    int nValue1 = 10;

    cout << "1. nValue1: " << nValue1 << endl;
    memoryCheck(&nValue1);
    cout << "4. nValue1: " << nValue1 << endl;
    // Note the warning: implicit conversion from 'double' to 'int' changes value from 7.33 to 7

    return 0;
}