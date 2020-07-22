#include <iostream>
using namespace std;

int main()
{
    string hello = "hello";
    cout << hello << endl;

    char text[] = "hello"; //char text[] = {'h', 'e', 'l', 'l', 'o'};

    // Iterate through array with for loop
    for (int i = 0; i < sizeof(text); i++)
    {
        cout << i << ": " << text[i] << endl;
    }

    // Iterate through array with while loop
    int k = 0;
    while (true)
    {
        if (text[k] == 0)
            break;

        cout << text[k] << flush;
        k++;
    }

    return 0;
}