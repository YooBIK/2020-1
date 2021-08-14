#include "student.h"
#include <iostream>
using namespace std;

student::student(string s = " ",double score=0) {
	this->score = score;
	this->sName = s;
}

string student::getsName() {
	return this->sName;
}

double student::getscore() {
	return this->score;
}


void student::setscore(double score) {
	this->score = score;
}

void student::setsName(string name) {
	this->sName = name;
}