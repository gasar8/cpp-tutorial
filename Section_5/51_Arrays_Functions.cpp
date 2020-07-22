#include <iostream>
using namespace std;

void show1(const int nElements, string texts[])
{
    cout << "Show 1:\n=======" << endl;
    for (int i = 0; i < nElements; i++)
    {
        cout << texts[i] << endl;
    }
}

void show2(const int nElements, string *texts)
{
    cout << "\nShow 2:\n=======" << endl;
    for (int i = 0; i < nElements; i++)
    {
        cout << texts[i] << endl;
    }
}

void show3(string (&texts)[3])
{
    cout << "\nShow 3:\n=======" << endl;
    for (int i = 0; i < sizeof(texts) / sizeof(string); i++)
    {
        cout << texts[i] << endl;
    }
}

// Do not return pointers to local variables:
// string *getArray(){
//     string texts[] = {"one", "two", "three"};
//     return texts;
// }

int main()
{

    string texts[] = {"apple", "orange", "banana"};
    show1(sizeof(texts) / sizeof(string), texts);
    show2(sizeof(texts) / sizeof(string), texts);
    show3(texts);

    return 0;
}