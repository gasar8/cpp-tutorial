#include <iostream>
#include <SDL.h>

using namespace std;

int main()
{

    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "SDL init failed. " << endl;
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
                                          SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                          SCREEN_WIDTH,
                                          SCREEN_HEIGHT,
                                          SDL_WINDOW_SHOWN);

    if (window == NULL)
    {
        cout << "Could not create window: " << SDL_GetError() << ".\n" << endl;
        SDL_Quit();
        return 2;
    }

    bool quit = false;
    SDL_Event event;

    while (!quit)
    {
        // Update particles
        // Draw particles
        // Check for massages/events

        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                quit = true;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}