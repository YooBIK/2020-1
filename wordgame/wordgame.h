#pragma once
#include "player.h"
#include <string>
using namespace std;

class wordgame
{
	player* players;
	int nplayer;
	string startword;
	void createplayers(int n);
	void playgame();
public:
	void startgame();
	~wordgame();	
};

