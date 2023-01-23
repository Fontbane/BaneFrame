#ifndef __ENTITY_H__
#define __ENTITY_H__
#include "b_defs.h"

typedef enum {
	IDLE,
	MOVING,
	HIDDEN
}EntityState;

typedef enum {
	ITEM,
	SIGN,
	WARP,
	NPC,
	EVENT_OBJECT,
	TRIGGER,
	PLAYER
}EntityType;

typedef struct edict_s {
	u16 id;

	u16 keepOnMapChange : 1;
	u16 mobile : 1;
	u16 followPlayer : 1;
	u16 hidden : 1;
	u16 trigger : 1;

	Sprite* sprite;
	Rectangle bounds;

	Point16 position;
	Point16 targetPosition;

	u8 z;

	EntityType kind;
	EntityState state;

	(void*)(think(edict_s* self));
	(void*)(update(edict_s* self));
	(void*)(draw(edict_s* self));
	(void*)(interact(edict_s* self, edict_s* other));
	(void*)(oncollide(edict_s* self, edict_s* other));
	(void*)(onenter(edict_s* self, edict_s* other));
	(void*)(onstay(edict_s* self, edict_s* other));
	(void*)(onexit(edict_s* self, edict_s* other));
}Entity;

void ent_move_to_point(Entity* ent, Point16 point);
void ent_move_to_ent(Entity* ent, Entity* other);
void ent_move_up(Entity* ent, u8 delta);

#endif