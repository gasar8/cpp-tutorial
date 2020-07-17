#include <iostream>
using namespace std;

int main()
{

    // Break
    for (int i = 0; i < 5; i++)
    {
        cout << "i = " << i << endl;

        if (i == 3)
        {
            break;
        }

        cout << "Looping ... " << endl;
    }

    cout << "Program quitting ... \n" << endl;

    // Continue
    for (int i = 0; i < 5; i++)
    {
        cout << "i = " << i << endl;

        if (i == 3)
        {
            continue;
        }

        cout << "Looping ... " << endl;
    }

    // Example of usage: code taken from do-while loops
    const string password = "hello";
    string input;

    do
    {
        cout << "Enter your password > " << flush;
        cin >> input;

        if (input == password)
        {
            break;
        }
        else
        {
            cout << "Access denied.  " << endl;
        }
    } while (input != password);

    cout << "Password accepted.  " << endl;

    return 0;
}