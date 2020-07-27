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
        for (int y = 0; y < bleban::Screen::SCREEN_HEIGHT; y++)
        {
            for (int x = 0; x < bleban::Screen::SCREEN_WIDTH; x++)
            {
                screen.setPixel(x, y, 128, 0, 255);
            }
        }

        screen.setPixel(400, 300, 255, 255, 255);

        // Draw the screen
        screen.update();

        // Check for messages/events
        if (screen.processEvents() == false)
        {
            break;
        }
    }

    screen.close();

    return 0;
}