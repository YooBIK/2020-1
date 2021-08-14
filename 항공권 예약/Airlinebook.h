#pragma once
#include "schedule.h"
#include "console.h"

class Airlinebook
{
	schedule* Sc = new schedule[3];
	int seatindex;
	string reserver;
public:
	Airlinebook();
	void startReservation();
	~Airlinebook();
};

