#ifndef __TILE_H__
#define __TILE_H__
#include "b_defs.h"
#include "entity.h"
#include "b_graphics.h"

typedef enum {
	TS_EMPTY,
	TS_ENTERING,
	TS_STAY,
	TS_LEAVING
}TileState;

typedef enum {
	TT_NORMAL,
	TT_GRASS,
	TT_SLOPE,
	TT_LEDGE_S,
	TT_LEDGE_E,
	TT_LEDGE_W,
	TT_WATER,
	TT_CRACKED,
	TT_HOLE,
	TT_LEAVES,
	TT_ANIMATED
}TileType;

typedef struct
{
	u16 y:8;
	u16 x:4;
	u16 collision : 4;
}TileDataRaw;

typedef struct tilebehavior_s{
	(void *) (think(metatile_s* self));
	(void*) (update(metatile_s* self));
	(void*) (draw(metatile_s* self));
	(void*) (oncollide(metatile_s* self, Entity* other));
	(void*) (onenter(metatile_s* self, Entity* other));
	(void*) (onstay(metatile_s* self, Entity* other));
	(void*) (onexit(metatile_s* self, Entity* other));
}TileBehavior;

typedef struct set_tile_s {
	TileDataRaw setPosition;
	TileType tiletype;

	TileDataRaw alt;
}TileData;

typedef struct metatile_s {
	TileBehavior* behavior;
	TileData tdata;
} MetatileData;

typedef struct tileinstance_s {
	TilesetTile tile;
	Point16 position;
}MapTile;

typedef struct metatileinstance_s {
	MetatileData* mdata;
	Point16 position;
}Metatile;

typedef union {
	TileData tile;
	MetatileData* meta;
}TilesetTile;

typedef struct {
	Sprite* sheet;
	TilesetTile tiles[16][256];
	Uint16 refCount;
}Tileset;

#endif // !__TILE_H__
