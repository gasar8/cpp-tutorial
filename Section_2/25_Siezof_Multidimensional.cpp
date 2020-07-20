#include <iostream>
using namespace std;

int main()
{

    // Sizeof Multidimensional arrays

    string animals[2][3] = {
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}};

    cout << "Sizeof string: " << sizeof(string) << endl;
    cout << "Size of animals array: " << sizeof(animals) << endl;
    cout << "Size of comlumn: " << sizeof(animals[0]) << endl;

    for (unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++)
    {
        for (unsigned int j = 0; j < sizeof(animals[0]) / sizeof(string); j++)
        {
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }
    return 0;
}