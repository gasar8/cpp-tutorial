#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Integer values
    int value = 6;
    cout << "Integer value: " << value << endl;

    // Floating point values
    float fValue = 76.41;
    cout << fixed << "\nFloating point value (fixed): " << fValue << endl;
    cout << scientific << "Floating point value (scientific): " << fValue << endl;

    cout << "Size of floating point " << sizeof(float) << " bytes." << endl;

    // Set precision
    cout << setprecision(20) << fixed << fValue << endl;

    //Doubles
    double dValue = 123.456789;
    cout << "\nDouble value: " << setprecision(20) << fixed << dValue << endl;
    cout << "Size of double: " << sizeof(dValue) << endl;

    long double lValue = 123.456789876543210;
    cout << "\nLong double value: " << setprecision(20) << fixed << lValue << endl;
    cout << "Size of long double: " << sizeof(lValue) << endl;

    return 0;
}