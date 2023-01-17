#include "GameObject.hpp"
#include "TextureManager.hpp"


GameObject::GameObject(const char* textureSheetPath, SDL_Renderer *renderer, int x, int y) {
    this->renderer = renderer;
    texture = TextureManager::LoadTexture(textureSheetPath, renderer);

    xpos = x;
    ypos = x;

    srcRect.h = 32;
    srcRect.w = 32;
    srcRect.x = 0;
    srcRect.y = 0;

    destRect.x = xpos;
    destRect.y = ypos;
    destRect.w = srcRect.w * 2;
    destRect.h = srcRect.h * 2;
}

void GameObject::Update() {

}

void GameObject::Render() {
    SDL_RenderCopy(renderer, texture, &srcRect, &destRect);
}