#include <iostream>
using namespace std;

int main()
{
    /*
    * == equality test
    * != not equals
    * < less than
    * > greater than
    * <= less than or equal to
    * >= greater than or equal to
    */

    int value1 = 7;
    int value2 = 4;

    if (value1 >= 8)
    {
        cout << "Condition 1: true" << endl;
    }
    else
    {
        cout << "Condition 1: false" << endl;
    }

    // And statement
    if (value1 == 7 && value2 < 3)
    {
        cout << "Condition 2: true" << endl;
    }
    else
    {
        cout << "Condition 2: false" << endl;
    }

    // Or statement
    if (value1 == 7 || value2 < 3)
    {
        cout << "Condition 3: true" << endl;
    }
    else
    {
        cout << "Condition 3: false" << endl;
    }

    // Be careful with not equal (flip conditions!)
    if ((value2 != 8 && value1 == 10) || value1 < 10)
    {
        cout << "Condition 4: true" << endl;
    }
    else
    {
        cout << "Condition 4: false" << endl;
    }

    // When dealing with complicated conditions it is better practice to store them as variables!
    bool condition1 = (value2 != 8) && (value1 == 10);
    bool condition2 = (value1 < 10);
    cout << "\nBool condition 1 is: " << condition1 << endl;
    cout << "Bool condition 2 is: " << condition2 << endl;

    if (condition1 || condition2)
    {
        cout << "Condition 5: true" << endl;
    }
    else
    {
        cout << "Condition 5: false" << endl;
    }

    return 0;
}