#include "group.h"

group::group(int i = 0) {
	this->classID = i;
}

void group::setclassID(int id) {
	this->classID = id;
}

int group::getclassID() {
	return this->classID;
}

void group::sort() {
	for (int j = 0; j < 4; ++j) {
		for (int i = 0; i < 4; ++i) {
			if (s[i].getscore() < s[i + 1].getscore()) {
				string name = s[i].getsName();
				s[i].setsName(s[i + 1].getsName());
				s[i + 1].setsName(name);
				
				double score = s[i].getscore();
				s[i].setscore(s[i + 1].getscore());
				s[i + 1].setscore(score);
			}
	}	
}
