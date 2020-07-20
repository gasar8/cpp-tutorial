#include <iostream>
using namespace std;

int main()
{

    // Multidimensional array

    cout << "\nMultidimensional array:" << endl;
    cout << "=======================\n" << endl;

    string animals[2][3] = {
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }

    // Homework

    cout << "\n\nHomework:" << endl;
    cout << "=========\n" << endl;

    int multiply[10][10];

    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            multiply[i][j] = i * j;
        }
    }

    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            cout << multiply[i][j] << "\t" << flush;
        }
        cout << endl;
    }

    return 0;
}