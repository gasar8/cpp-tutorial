#include <iostream>
using namespace std;

// .h header file
class Test
{
public:
    // Initialization of constants must be done right here!
    static int const MAX = 99;

private:
    int id;
    static int count;

public:
    Test() { id = ++count; } //count++

    int getId() { return id; }
    static void showInfo()
    {
        cout << count << endl;
    }
};

// .cpp source
int Test::count = 0;

int main()
{

    cout << Test::MAX << endl;

    Test test1;
    //Test::showInfo();
    cout << "Object 1 ID: " << test1.getId() << endl;

    Test test2;
    //Test::showInfo();
    cout << "Object 2 ID: " << test2.getId() << endl;

    return 0;
}