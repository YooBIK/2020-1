#include "schedule.h"

void schedule::settime(int n) {
	switch (n) {
	case 1:
		this->time = "07½Ã";
		break;
	case 2:
		this->time = "12½Ã";
		break;
	case 3:
		this->time = "17½Ã";
		break;
	default :
		break;
	}
}

string schedule::gettime() {
	return this->time;
}

void schedule::showlist() {
	cout << gettime() << ":\t";
	for (int i = 0; i < 8; ++i) {
		cout <<s[i].getrName() << "\t" ;
	}
	cout << endl;
}

schedule::~schedule() {
	delete[] s;
}