#ifndef __B_SAVE_HPP__
#define __B_SAVE_HPP__
#include "baneframe.hpp"

using namespace BaneFrame;



class SaveManager {
	/*
	Not necessarily permanent, but once set usually shouldn't be changed.
	These fields don't need to be backed up since they won't be updated.
	*/
	typedef struct {
		TextWord name;
		PlayerPermData perm;
		u32 startDate : 16;
		u32 startYear : 16;
	} SaveDataPermanent;

	typedef struct {
		PlayerData player;
		time_t playTime;
	} SaveDataVolatile;

	SaveManager();
	void LoadSave(TextLine filepath);
	void LoadBackupSave(TextLine filepath);
};

#endif