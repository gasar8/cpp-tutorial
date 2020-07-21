#include <iostream>
using namespace std;

double add(double value1, double value2)
{
    double result;
    result = value1 + value2;
    return result;
}

double addAddress(double *value1, double *value2)
{
    double result;
    result = *value1 + *value2;
    return result;
}

int main()
{
    double value = 7;
    double *pValue = &value;

    cout << "Value (value):\t\t\t\t" << value << endl;
    cout << "Pointer value (pValue):\t\t\t" << pValue << endl;
    cout << "Dereference pointer (*pValue):\t\t" << *pValue << endl;
    cout << "Addres of value (&value):\t\t" << &value << endl;
    cout << "=======================================================\n" << endl;

    double a = 3, b = 4;
    double *c = &a, *d = &b;

    cout << "Result: " << a << " + " << b << " = " << add(a, b) << endl;
    cout << "Result via pointers: " << *c << " + " << *d << " = " << addAddress(c, d) << endl;
    cout << "=======================================================\n" << endl;

    // Pointer to a function
    double (*function)(double, double) = &add; // & can be omitted
    cout << "Result via pointing to a function: " << a << " + " << b << " = " << function(a, b) << endl;

    double (*function1)(double *, double *) = &addAddress;
    cout << "Result via pointing to a function: " << *c << " + " << *d << " = " << function1(c, d) << endl;

    return 0;
}