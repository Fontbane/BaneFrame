#ifndef __MAP_H__
#define __MAP_H__

#include "b_defs.h"
#include "tile.h"

typedef struct {
	(void*)(onenter(MapData* self, Entity* ent));
	(void*)(onexit(MapData* self, Entity* ent));
}MapScripts;


typedef struct {
	u16 id;
	u16 flags;

	TextLine name;

	MapConnection connections[4];

	u8 height;
	u8 width;
	Tileset* tileset;
	TileDataRaw* raw;
}MapData;

typedef struct {
	u16 id;
	s8 x;
	s8 y;
}MapConnection;

MapData* map_new();
MapData* map_load(TextLine name, Entity* trigger);
void map_enter(MapData* map, Entity* trigger);
void map_exit(MapData* map, Entity* trigger);
void map_free(MapData* map);

#endif