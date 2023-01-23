#ifndef __B_GRAPHICS_H__
#define __B_GRAPHICS_H__

#include <SDL.h>
#include "b_defs.h"

typedef struct {
	TextLine path;
	u16 width;
	u16 height;
	u16 refCount;
	u16 frames;
	SDL_Texture* texture;
	SDL_Surface* surface;
}Sprite;


void sprite_manager_init();
Sprite* sprite_new();
Sprite* sprite_load(TextLine path);
Sprite* sprite_load_palette(TextLine path, u8 pal);
Sprite* sprite_apply_palette(Sprite* sprite, u8 pal);

#endif