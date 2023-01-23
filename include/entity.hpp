#ifndef __ENTITY_HPP__
#define __ENTITY_HPP__
#include "baneframe.hpp"
#include "b_graphics.hpp"
using namespace BaneFrame;

#define MAX_ENTITIES	1024

class BaneFrame::Entity {
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

	public:
		Point16 position;
		Point16 targetPosition;
		u32 flags;
		Sprite* sprite;
		EntityState state;
		EntityType enttype;

		Entity(EntityType enttype);

};

#endif