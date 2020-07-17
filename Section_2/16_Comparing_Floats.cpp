#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
    Comparing floats in C++ is somehow difficult, because of memory and decimal places.
    You shoud instead use some creterion to decide based on difference
    */

    float value = 1.1;

    // Proof that normal == comparison does not work.
    cout << "Normal comparison: " << flush;
    if (value == 1.11)
    {
        cout << "\t\t\tEqual!" << endl;
    }
    else
    {
        cout << "\t\t\tNot equal! " << endl;
    }

    // Try to compare difference
    cout << "Comparison based on difference: " << flush;
    if (value - 1.1 < 1e-04)
    {
        cout << "\tEqual! " << endl;
    }
    else
    {
        cout << "\tNot equal! " << endl;
    }

    cout << setprecision(10) << "\nValue stored in memory: " << value << endl;

    return 0;
}