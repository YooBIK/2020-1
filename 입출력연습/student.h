#pragma once
#include <iostream>
#include <string>
using namespace std;

class student
{
	string sName;
	double score;
public :
	student(string s= " ", double score = 0);
	string getsName();
	void setsName(string name);	
	double getscore();
	void setscore(double score);
};

