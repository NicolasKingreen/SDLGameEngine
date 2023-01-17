#pragma once

#include "Game.hpp"

class GameObject {

public:
    GameObject(const char* textureSheetPath, SDL_Renderer *renderer, int x, int y);
    ~GameObject();

    void Update();
    void Render();

private:
    int xpos;
    int ypos;

    SDL_Texture *texture;
    SDL_Rect srcRect, destRect;
    SDL_Renderer *renderer;
};
