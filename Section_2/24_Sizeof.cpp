#include <iostream>
using namespace std;

int main()
{

    // Sizeof and arrays

    int value = 24;
    cout << "Sizeof int value: " << sizeof(value) << endl;

    int values[] = {4, 7, 3, 4};
    cout << "Sizeof array: " << sizeof(values) << endl;

    for (unsigned int i = 0; i < sizeof(values) / sizeof(int); i++)
    {
        cout << values[i] << " " << flush;
    }
    cout << endl;

    return 0;
}