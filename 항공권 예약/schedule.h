#pragma once
#include "seat.h"
class schedule
{
	string time;
public:
	seat* s = new seat[8];
	void settime(int n);
	string gettime();
	void showlist();
	~schedule();
};

