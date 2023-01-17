#include "TextureManager.hpp"

SDL_Texture* TextureManager::LoadTexture(const char* texturePath, SDL_Renderer* renderer) {
    SDL_Surface *tempSurface = IMG_Load(texturePath);
    SDL_SetColorKey(tempSurface, SDL_TRUE, SDL_MapRGB(tempSurface->format, 0, 255, 0));
    SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
    SDL_FreeSurface(tempSurface);
    return texture;
}