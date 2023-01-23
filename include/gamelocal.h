#ifndef __GAMELOCAL_H__
#define __GAMELOCAL_H__
#include "player.h"

typedef enum {
	GS_MAIN_MENU,
	GS_GAME,
	GS_MENU_PARTIAL,
	GS_MENU_FULL
}GameScreenState;

typedef struct game_s {
	GameScreenState state;
	PlayerData player;
}Game;

#endif