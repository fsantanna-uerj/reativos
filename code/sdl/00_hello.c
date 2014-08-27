#include <SDL2/SDL.h>
#include <assert.h>

int main (int argc, char* args[])
{
    /* INITIALIZATION */

    int err = SDL_Init(SDL_INIT_EVERYTHING);
    assert(err == 0);

    SDL_Window* window = SDL_CreateWindow("Hello World!",
                            SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                            640, 480, SDL_WINDOW_SHOWN
                         );
    assert(window != NULL);

    /* EXECUTION */

    SDL_Surface* screenSurface = SDL_GetWindowSurface(window);
    assert(screenSurface != NULL);

    SDL_FillRect(screenSurface, NULL,
        SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF)
    );

    SDL_Rect r = { 200,200, 50, 50 };
    SDL_FillRect(screenSurface, &r,
        SDL_MapRGB(screenSurface->format, 0x00, 0x00, 0xFF)
    );
			
    SDL_UpdateWindowSurface(window);

    SDL_Delay(5000);

    /* FINALIZATION */

    SDL_DestroyWindow(window);
    SDL_Quit();

	return 0;
}
