#include <iostream>
using namespace std;

int main()
{

    // Do-While loop
    int value = 7;
    do
    {
        cout << "Hello" << endl;
    } while (value < 5);

    // Checking password with while loop
    const string password = "hello";

    cout << "Enter your password > " << flush;
    string input;
    cin >> input;

    // While input is not equal to password: retry
    while (input != password)
    {
        cout << "Access denied.  " << endl;
        cout << "Enter your password > " << flush;
        cin >> input;
    }

    cout << "Password accepted.  " << endl;

    // Checking password with do-while loop
    do
    {
        cout << "Enter your password > " << flush;
        cin >> input;

        if (input != password)
        {
            cout << "Access denied.  " << endl;
        }
    } while (input != password);

    cout << "Password accepted.  " << endl;

    return 0;
}