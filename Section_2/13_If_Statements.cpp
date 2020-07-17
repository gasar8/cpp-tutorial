#include <iostream>
using namespace std;

int main()
{
    string password = "hello";

    cout << "Enter your password: " << flush;

    string input;
    cin >> input;

    cout << "'" << input << "'" << endl;

    if (input == password)
    {
        cout << "Password is correct." << endl;
    }

    if (input != password)
    {
        cout << "Access denied." << endl;
    }

    return 0;
}