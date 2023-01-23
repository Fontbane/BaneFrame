#ifndef __B_SERVER_HPP__
#define __B_SERVER_HPP__

#include "baneframe.hpp"
#include "entity.hpp"
using namespace BaneFrame;

#define MAX_B_PATH 64
#define MAX_SPRITES_SIMUL 256
#define MAX_TEXT_STRINGS 256
#define MAX_CONFIG_STRINGS 1024

#define CLIENTS_MAX 16

class BaneFrame::Server {
public:
	char configstrings[MAX_CONFIG_STRINGS][MAX_B_PATH];

	Server();
};

class BaneFrame::Client {
public:
	u16 id;
	u16 mapid;
	TextBlock localText[MAX_TEXT_STRINGS];
	TextBlock globalText[MAX_TEXT_STRINGS];
	Entity entities[MAX_ENTITIES];
	Client();
};

#endif