#include <iostream>
using namespace std;

int main()
{
    char text[] = "Hello there.";

    int nChars = sizeof(text) - 1;

    char *pStart = text;
    char *pEnd = text + nChars - 1;

    while (pStart < pEnd)
    {
        // Swap letters
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save;

        // Move on - increment/decrement pointers
        pStart++;
        pEnd--;
    }

    cout << text << endl;

    return 0;
}