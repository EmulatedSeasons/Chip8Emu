#include <SDL2/SDL.h>
#include <iostream>

int main(int argc, char **argv) {

    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event event;


    if (SDL_Init(SDL_INIT_EVERYTHING) > 0)
    {
        return 1;
    }

    if (SDL_CreateWindowAndRenderer(64, 32, SDL_WINDOW_SHOWN,&window, &renderer))
    {
        return 2;
    }

    while (true)
    {
        SDL_PollEvent(&event);
        if (event.type == SDL_QUIT)
        {
            break;
        }
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
        SDL_RenderClear(renderer);
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
        SDL_RenderDrawPoint(renderer, 32, 16);
        SDL_RenderPresent(renderer);

    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
