#include <iostream>
using namespace std;

int main()
{
    int value = 4;

    switch (value)
    {
    case 4:
        cout << "Value is 4. " << endl;
        break;
    case 5:
        cout << "Value is 5. " << endl;
        break;
    case 6:
        cout << "Value is 6. " << endl;
        break;
    default:
        cout << "Unrecognized value. " << endl;
        break;
    }

    cout << endl;

    // Homework

    int menu;
    cout << "Today's menu:\n1. Lobster\n2. Pasta\n3. Soup\n" << endl;
    cout << "What would you like to eat? " << flush;
    cin >> menu;

    switch (menu)
    {
    case 1:
        cout << "\nExcellent choice! It will cost you 20$. " << endl;
        break;
    case 2:
        cout << "\nGood choice! It will cost you 10$. " << endl;
        break;
    case 3:
        cout << "\nNice choice! It will cost you 5$. " << endl;
        break;
    default:
        cout << "\nUnrecognized value. " << endl;
        break;
    }

    return 0;
}