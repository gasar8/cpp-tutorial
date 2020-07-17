#include <iostream>
using namespace std;

int main()
{
    // Options
    cout << "1.\tAdd new record. " << endl;
    cout << "2.\tDelete record. " << endl;
    cout << "3.\tView record. " << endl;
    cout << "4.\tSearch record. " << endl;
    cout << "5.\tQuit. " << endl;

    // Input selection
    cout << "Enter your selection > " << flush;
    int value;
    cin >> value;

    // Greater vs. less than
    if (value < 3)
    {
        cout << "Insufficient privileges to use these menu option. " << endl;
    }
    else
    {
        cout << "Privilege level sufficient. " << endl;
    }

    // Equal to vs. else
    if (value == 5)
    {
        cout << "Application quitting... " << endl;
    }
    else
    {
        cout << "Not quitting. " << endl;
    }
    
    return 0;
}