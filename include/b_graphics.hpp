#ifndef __B_GRAPHICS_HPP__
#define __B_GRAPHICS_HPP__

#include "baneframe.hpp"
using namespace BaneFrame;

class BaneFrame::Sprite {
	public:
		/*Word 0x00-0x01: asset path*/
		u16 assetid;
		/*Word 0x02-0x03: width*/
		u16 width;
		/*Word 0x04-0x05: height*/
		u16 height;
		/*Word 0x06-0x07: refcount*/
		u16 refcount;
		/*Word 0x08-0x09: number of frames*/
		u16 frames;
		u16 padding;
		/*Word 0x0C-0x0F: pointer to texture*/
		SDL_Texture* texture;
		/*Word 0x10-0x14: pointer to surface*/
		SDL_Surface* surface;

		Sprite(TextLine path, u16 frameWidth, u16 frameHeight, u16 frames, u8 palette);
		Sprite(TextLine path, u16 frameWidth, u16 frameHeight, u16 frames);
		Sprite(TextLine path, u8 palette);
		Sprite(TextLine path);
		Sprite();

		void ApplyPalette(u8 palette);

		void Draw(SDL_Point drawpos, Vector2F scale);
		void DrawWithPalette(SDL_Point drawpos, Vector2F scale, u8 palette);
		void DrawFrame(SDL_Point drawpos, Vector2F scale, u8 frame);
		void DrawFrameWithPalette(SDL_Point drawpos, Vector2F scale, u8 frame, u8 palette);
};

#endif