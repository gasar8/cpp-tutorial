#include <iostream>
#include <limits>

using namespace std;

int main()
{

    cout << "Max int value: " << INT_MAX <<endl;
    cout << "Min int value: " << INT_MIN <<endl;

    long int lValue = 23423525345346354;
    cout << "Long int: " << lValue << ". Should be in range " << LONG_MIN << " : " << LONG_MAX << endl;

    short int sValue = 24342;
    cout << "Short int: " << sValue << ". Should be in range " << SHRT_MIN << " : " << SHRT_MAX << endl;

    cout << "\nSize of int: " << sizeof(int) << endl;
    cout << "Size of short int: " << sizeof(sValue) << endl;
    cout << "Size of long int: " << sizeof(lValue) << endl;

    unsigned int uValue = 3242423; // Only positive values - larger numbers fit in memory
    cout << uValue << endl;

    return 0;
}