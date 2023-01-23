#ifndef __B_DEFS_H__
#define __B_DEFS_H__
#include <SDL.h>
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
	u8 x, y, x2, y2;
}Rectangle;

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
}Direction;

#endif // !__B_DEFS_H__