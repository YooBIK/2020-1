#include "management.h"
management::management() {
	for (int i = 0; i < 3; ++i) {
		g[i].setclassID(i);
	}
}

void management::startmanagement() {
	bool loop = true;
	while (loop) {
		int comand = UI::selectmenu();
		switch (comand) {
		case 1:
			inputinfo();
			break;
		case 2:
			outputAllinfo();
			break;
		case 3:
			outputclassinfo();
			break;
		case 4:
			cout << "���α׷��� �����մϴ�. " << endl;
			loop = false;
			break;
		default :
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			break;
		}
	}	
}

void management::inputinfo() {
	int classnumber = UI::inputclass();
	string s = UI::inputname();
	double d = UI::inputscore();
	int a = g[classnumber].count;
	if (a == 5) {
		cout << "���� �ʰ��Դϴ�. " << endl;
	}
	else {
		g[classnumber].s[a].setsName(s);
		g[classnumber].s[a].setscore(d);
	}
}