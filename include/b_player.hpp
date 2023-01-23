#ifndef __B_PLAYER_HPP__
#define __B_PLAYER_HPP__

#include "baneframe.hpp"

using namespace BaneFrame;
class PlayerData {
	Point16 position;
	u16 id;
	u16 mapid;
	Direction dir;
	PlayerData();
	
	PlayerData* load_player_data_from_save(TextLine filepath);
};
class PlayerPermData {
	//implementation depends on what developer wants
	TextLine name;
	u16 id;

	PlayerPermData();

	typedef enum {
		PPD_NAME,
		PPD_ID
	} PlayerPermDataField;

	PlayerPermData* load_player_perm_data(TextLine filepath);
	void save_player_perm_data(TextLine filepath);
};

#endif // !__B_PLAYER_HPP__
