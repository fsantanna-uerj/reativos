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

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    assert(renderer != NULL);

    /* EXECUTION */

    SDL_Rect r = { 200,200, 50, 50 };
    SDL_Event e;

    while (1)
    {
        while (SDL_PollEvent(&e) == 0)
            ;

        if (e.type == SDL_QUIT) {
            break;
        } else if (e.type == SDL_KEYDOWN) {
            switch (e.key.keysym.sym) {
                case SDLK_UP:
                    r.y -= 10;
                    break;
                case SDLK_DOWN:
                    r.y += 10;
                    break;
                case SDLK_LEFT:
                    r.x -= 10;
                    break;
                case SDLK_RIGHT:
                    r.x += 10;
                    break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0xFF,0xFF,0xFF,0x00);
        SDL_RenderFillRect(renderer, NULL);

        SDL_SetRenderDrawColor(renderer, 0x00,0x00,0xFF,0x00);
        SDL_RenderFillRect(renderer, &r);

        SDL_RenderPresent(renderer);
    }

    /* FINALIZATION */

    SDL_DestroyWindow(window);
    SDL_Quit();

	return 0;
}
