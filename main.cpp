#include "Game.hpp"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

Game *game = nullptr;

int main(int argc, char* argv[])
{
    game = new Game();
    game->init("SDL Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, false);
    while (game->running()) {
        game->handleEvents();
        game->update();
        game->render();
    }
    game->clean();

    return EXIT_SUCCESS;
}