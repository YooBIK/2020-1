#include "professor.h"

professor::professor() {
	;
}
professor::professor(string pname) {
	this->pname = pname;
}

void professor::setpname(string pname) {
	this->pname = pname;
};
string professor::getpname() {
	return pname;
};

void professor::setpshare() {
	if (this->share == 0) {
		this->share = 1;
	}
	else if (this->share == 1) {
		this->share = 0;
	}
};

string professor::getpshare() {
	if (this->share == 0) {
		return "off";
	}
	else if (this->share == 1) {
		return "on";
	}
};

void professor::setpmic() {
	if (this->mic == 0) {
		this->mic = 1;
	}
	else if (this->mic == 1) {
		this->mic = 0;
	}
};

void professor::setpcam() {
	if (this->cam == 0) {
		this->cam = 1;
	}
	else if (this->cam == 1) {
		this->cam = 0;
	}
};

string professor::getpcam() {
	if (this->cam == 0) {
		return "off";
	}
	else if (this->cam == 1) {
		return "on";
	}
};

string professor::getpmic() {
	if (this->mic == 0) {
		return "off";
	}
	else if (this->mic == 1) {
		return "on";
	}
};

void professor::setshare() {
	string x;
	cout << "공유 하려는 화면을 텍스트로 입력하세요.";
	cin >> x;
	this->sharing = x;
};

string professor::getshare() {
	return sharing;
};