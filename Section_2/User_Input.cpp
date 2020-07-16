#include <iostream>
using namespace std;

int main()
{
    string text = "Hello!\n";
    cout << text << endl;

    // Input a string
    cout << "Enter your name: " << flush;
    string input;
    cin >> input;
    cout << "You entered: " << input << endl;

    // Input a  number
    cout << "Enter your age: " << flush;
    int value;
    cin >> value;
    cout << "You entered: " << value << endl;

    return 0;
}