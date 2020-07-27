#include <iostream>
#include <SDL.h>
#include <math.h>
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
        int elapsed = SDL_GetTicks();
        unsigned char green = (1 + sin(elapsed * 0.0001)) * 128;
        unsigned char red = (1 + sin(elapsed * 0.0002)) * 128;
        unsigned char blue = (1 + sin(elapsed * 0.0003)) * 128;

        for (int y = 0; y < bleban::Screen::SCREEN_HEIGHT; y++)
        {
            for (int x = 0; x < bleban::Screen::SCREEN_WIDTH; x++)
            {
                screen.setPixel(x, y, red, green, blue);
            }
        }

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