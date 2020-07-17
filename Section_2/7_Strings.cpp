#include <iostream>
using namespace std;

int main()
{
    int value = 6;
    cout << value << endl;

    string text1 = "Hello, ";
    string text2 = "Fred!\n";

    cout << text1 << endl;
    cout << text2 << endl;

    cout << text1 << text2 << endl;

    string text3 = text1 + text2;
    cout << text3 << endl;

    return 0;
}