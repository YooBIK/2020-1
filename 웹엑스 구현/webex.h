#pragma once
#include "student.h"
#include "professor.h"

class webex
{
	int max=0;
	int count = 0;
public:
	student* s;
	int sindex = 0;
	professor p;
	int chatorder = 0;
	string* chatsave = new string[15];
	
	webex();
	void startwebex();
	void setproffesor(string pname);
	void addstudent();
	void sinterface();
	void pinterface();
	void startstudent();
	void startprofessor();
	void showlist();
	~webex();
};