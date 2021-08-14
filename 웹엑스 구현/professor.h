#pragma once
#include <iostream>
#include <string>
using namespace std;

class professor
{
	string pname;
	int mic = 0;
	int share = 0;
	int cam = 0;

public:
	string sharing = "";
	professor();
	professor(string pname);
	void setpname(string pname);
	string getpname();
	void setpshare();
	string getpshare();
	void setpmic();
	void setpcam();
	string getpmic();
	string getpcam();
	void setshare();
	string getshare();
};