#pragma once
#include <string>
using namespace std;

class player
{
	string word;
	string name;
public:
	void setname(string name);
	string getname();
	void sayword(string word);
	string getword();
};

