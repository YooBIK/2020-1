#pragma once
#include "group.h"
#include "UI.h"


class management
{
	group* g = new group[3];
	double averageAll;
	double average[3];
	double sdAll;
	double sd[3];
public:
	management();
	void startmanagement();
	void inputinfo();
	void outputAllinfo();
	void outputclassinfo();
};

