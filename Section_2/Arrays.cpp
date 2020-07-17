#include <iostream>
using namespace std;

int main()
{

    // Array of integers
    cout << "\nArray of integers. " << endl;
    cout << "==================" << endl;

    int values[3];

    values[0] = 88;
    values[1] = 123;
    values[2] = 7;

    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;

    //Array of doubles
    cout << "\nArray of doubles. " << endl;
    cout << "==================" << endl;

    double numbers[4] = {4.5, 2.3, 7.2, 8.1};

    cout << "Numbers[0] = " << numbers[0] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // Initializing with zero values
    cout << "\nInitializing with zero values. " << endl;
    cout << "==============================" << endl;

    int numberArray[8] = {};

    for (int i = 0; i < 8; i++)
    {
        cout << "Element at index " << i << ": " << numberArray[i] << endl;
    }

    //Array of strings
    cout << "\nInitializing with strings. " << endl;
    cout << "==============================" << endl;
    string texts[] = {"apple", "banana", "orange"}; // if you declare elements at initialization, you do not need number of elements in []

    for (int i = 0; i < 3; i++)
    {
        cout << "Element at index " << i << ": " << texts[i] << endl;
    }

    // Accessing memory which was not allocated
    // cout << "\n\nBad idea: " << values[77] << endl;

    return 0;
}