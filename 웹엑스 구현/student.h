#pragma once
#include <iostream>
#include <string>
using namespace std;

class student
{
	string sname;
	string id;
	int mic = 0;
	int	cam = 0;
public:
	student();
	student(string id, string sname);
	string getid();
	void setsname(string sname);
	string getsname();
	void setsmic();
	string getsmic();
	void setscam();
	string getscam();
};
