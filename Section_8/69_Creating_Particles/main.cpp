#include <iostream>
#include <SDL.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Swarm.h"

using namespace std;

int main()
{

    srand(time(NULL));

    bleban::Screen screen;

    if (screen.init() == false)
    {
        cout << "Error initialising SDL. " << endl;
    }

    bleban::Swarm swarm;

    while (true)
    {
        // Update particles

        // Draw particles
        int elapsed = SDL_GetTicks();
        unsigned char green = (1 + sin(elapsed * 0.0001)) * 128;
        unsigned char red = (1 + sin(elapsed * 0.0002)) * 128;
        unsigned char blue = (1 + sin(elapsed * 0.0003)) * 128;

        const bleban::Particle *const pParticles = swarm.getParticles();
        for (int i = 0; i < bleban::Swarm::NPARTICLES; i++)
        {
            bleban::Particle particle = pParticles[i];

            int x = (particle.m_x + 1) * bleban::Screen::SCREEN_WIDTH / 2;
            int y = (particle.m_y + 1) * bleban::Screen::SCREEN_HEIGHT / 2;

            screen.setPixel(x, y, red, green, blue);
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