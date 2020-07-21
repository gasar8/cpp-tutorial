#include <iostream>
using namespace std;

int main()
{
    string texts[] = {"one", "two", "three"};
    string *pTexts = texts;

    cout << "Sizeof array: " << sizeof(texts) / sizeof(string) << endl;
    cout << "s====================================================\n" << endl;

    cout << "1. example: Normal for loop" << endl;
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++)
    {
        cout << pTexts[i] << " " << flush;
    }
    cout << "\n====================================================\n" << endl;

    // We can iterate through the array also with the help of pointers
    cout << "2. example: Increment pointer" << endl;
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++)
    {
        cout << *pTexts << " " << flush;
        pTexts++;
    }
    cout << "\n====================================================\n" << endl;

    // More condensed example
    cout << "3. example: Increment pointer (condensed)" << endl;
    string *pTexts1 = texts; // Initialize once more, otherwise pTexts remains where it was left at the end of previous for loop.
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts1++)
    {
        cout << *pTexts1 << " " << flush;
    }
    cout << "\n====================================================\n" << endl;

    // One more way to iterate through array
    cout << "4. example: While loop" << endl;
    string *pElement = &texts[0];
    string *pEnd = &texts[2];

    while (true)
    {
        cout << *pElement << " " << flush;

        if (pElement == pEnd)
        {
            break;
        }
        pElement++;
    }
    cout << "\n====================================================\n" << endl;

    return 0;
}