#include "console.h"



void console::startUI() {
	cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl<<endl;

}

int console::selectmenu() {
	int menu;
	cout << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
	cin >> menu;
	return menu;
}

int console::selectseat() {
	int seatNumber;
	cout << "좌석번호 >> ";
	cin >> seatNumber;
	return seatNumber;

}
string console::reserveName() {
	string name;
	cout << "이름 입력>> ";
	cin >> name;
	return name;
}
int console::selecttime() {
	int time;
	cout << "07시:1, 12시:2, 17시:3>> ";
	cin >> time;
	return time;
}
