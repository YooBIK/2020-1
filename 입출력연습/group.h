#pragma once
#include "student.h"


class group
{
	int classID;

public:
	student* s = new student[5];
	int index = 0;
	int count = 0;
	group(int i = 0 );
	void setclassID(int id);
	int getclassID();
	void sort();


};

