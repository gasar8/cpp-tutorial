#include <iostream>
using namespace std;

int main()
{
    int value = 6 / 2;
    cout << "6 / 2 = " << value << endl;

    double value1 = 7 / 2;
    cout << "7 / 2 = " << value1 << endl;

    double value2 = 7.0 / 2; // or use casting: (double)7/2
    cout << "7.0 / 2 = " << value2 << endl;

    int value3 = 8;
    value3 += 1; // value3 = value3 + 1 or value3++
    cout << "8 +=1 = " << value3 << endl;

    int value4 = 10;
    value4 /= 5; // value4 = value4 / 5
    cout << "10 /= 5 = " << value4 << endl;

    // mod operator
    int value5 = 12 % 5;
    cout << "12 % 5 = " << value5 << endl;

    // Precedence
    double equation = ((5 / 4) % 2) + (2.3 * 6); // Do not do this: 5/4%2+2.3*6
    cout << "((5 / 4) % 2) + (2.3 * 6) = " << equation << endl;
    cout << "================================\n" << endl;

    // Homework 1: Take large number of seconds amd convert it to days, hours, minutes and seconds

    int lSeconds[5] = {75, 23244, 2342345, 86400, 82810};

    for (int i = 0; i < sizeof(lSeconds) / sizeof(int); i++)
    {
        cout << lSeconds[i] << " s is: " << lSeconds[i] / 3600 / 24 << " days, " << lSeconds[i] / 3600 % 24 << " h, " << (lSeconds[i] / 60) % 60 << " min and " << lSeconds[i] % 60 << " s." << endl;
    }
    cout << "=============================================\n" << endl;

    // Homework 2: Write a for loop that iterates 10,000 times; output a dot (on the same line) every 100th iteration.

    for (int j = 0; j < 10000; j++) //use 1000000000 to see slower progress
    {
        if (j % 100 == 0) // use 10000000 to see slower progress
        {
            cout << "." << flush;
        }
    }
    cout << endl;

    return 0;
}