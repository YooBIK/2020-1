#include "console.h"



void console::startUI() {
	cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ� *****" << endl<<endl;

}

int console::selectmenu() {
	int menu;
	cout << "����:1, ���:2, ����:3, ������:4>> ";
	cin >> menu;
	return menu;
}

int console::selectseat() {
	int seatNumber;
	cout << "�¼���ȣ >> ";
	cin >> seatNumber;
	return seatNumber;

}
string console::reserveName() {
	string name;
	cout << "�̸� �Է�>> ";
	cin >> name;
	return name;
}
int console::selecttime() {
	int time;
	cout << "07��:1, 12��:2, 17��:3>> ";
	cin >> time;
	return time;
}
