#include <iostream>
#include <SDL.h>
#include "Screen.h"

using namespace std;

int main()
{

    bleban::Screen screen;

    if (screen.init() == false)
    {
        cout << "Error initialising SDL. " << endl;
    }

    while (true)
    {
        // Update particles
        // Draw particles
        // Check for massages/events

        if (screen.processEvents() == false)
        {
            break;
        }
    }

    screen.close();

    return 0;
}