#include "student.h"

student::student() { ; };

student::student(string id, string sname) {
	this->sname = sname;
	this->id = id;
}
void student::setsname(string sname) {
	this->sname = sname;
}
string student::getid() {
	return id;
}
string student::getsname() {
	return sname;
}

void student::setsmic() {
	if (this->mic == 0) {
		this->mic = 1;
	}
	else if (this->mic == 1) {
		this->mic = 0;
	}
}

void student::setscam() {
	if (this->cam == 0) {
		this->cam = 1;
	}
	else if (this->cam == 1) {
		this->cam = 0;
	}
}

string student::getscam() {
	if (this->cam == 0) {
		return "off";
	}
	else if (this->cam == 1) {
		return "on";
	}
}

string student::getsmic() {
	if (this->mic == 0) {
		return "off";
	}
	else if (this->mic == 1) {
		return "on";
	}
}