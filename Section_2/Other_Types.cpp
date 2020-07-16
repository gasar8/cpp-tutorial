#include <iostream>

using namespace std;

int main()
{
    // Bools
    bool True = true;
    bool False = false;

    cout << "True: " << True << endl;
    cout << "False: "<< False << endl;

    // Chars
    char cValue = 55;
    cout << "\nASCII value of " << int(cValue) << " represents character " << cValue << endl;
    cout << "Size of char is " << sizeof(char) << " bytes." << endl;

    // wchar_t
    wchar_t wValue = 'i';
    cout << "\nwchar_t of " <<  char(wValue) << " is " << wValue << endl;
    cout << "Size of wchar is " << sizeof(wchar_t) << " bytes." << endl;

    return 0;
}