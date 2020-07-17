#include <iostream>
using namespace std;

int main()
{

    // Infinite loop
    /*
    * while (true)
    * {
    *   cout << "Hello" << endl;
    * }
    * */

    int i = 0;

    while (i < 5)
    {
        cout << "Hello. i: " << i << endl;
        i += 1; // equal to i++ or i=i+1
    }
    cout << "Program quitting." << endl;

    return 0;
}