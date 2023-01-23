#ifndef __BANEFRAME_HPP__
#define __BANEFRAME_HPP__

#include <SDL.h>

namespace BaneFrame {
	typedef Uint8 u8;
	typedef Uint16 u16;
	typedef Uint32 u32;
	typedef Uint64 u64;
	typedef Sint8 s8;
	typedef Sint16 s16;
	typedef Sint32 s32;
	typedef Sint64 s64;

	typedef char TextWord[16];
	typedef char TextLine[128];
	typedef char TextBlock[1024];

	typedef SDL_Point Point;

	typedef struct {
		float x, y;
	} Vector2F;
	Vector2F v2f_zero = {
		.x = 0,
		.y = 0
	}; 
	Vector2F v2f_one = {
		.x = 1,
		.y = 1
	};

	typedef struct {
		float x, y, z;
	} Vector3F;
	Vector3F v3f_zero = {
		.x = 0,
		.y = 0,
		.z = 0
	};
	Vector3F v3f_one = {
		.x = 1,
		.y = 1,
		.z = 1
	};

	typedef struct {
		u8 x, y, x2, y2;
	} Rectangle;

	typedef struct {
		u8 x, y, r;
	} Circle;

	typedef struct {
		u16 x;
		u16 y;
	} Point16;

	#define SDL_PT_FROM_PT16(dst, src)=(dst.x=src.x,dst.y=src.y)
	#define PT16_FROM_SDL_PT(dst, src)=(dst.x=src.x,dst.y=src.y)

	typedef enum {
		DIR_SOUTH,
		DIR_WEST,
		DIR_NORTH,
		DIR_EAST
	} Direction;

	class Entity;
	class Sprite;
	class Server;
	class Client;
	class ClientFrame;
	class AssetManager;
	class PlayerData;
	class PlayerPermData;
	class SaveManager;
}


#endif