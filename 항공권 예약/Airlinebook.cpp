#include "Airlinebook.h"

Airlinebook::Airlinebook() {
	for (int i = 0; i < 3; ++i) {
		Sc[i].settime(i+1);
	}
}

void Airlinebook::startReservation() {
	console::startUI();
	while(1){ 
		int a = console::selectmenu();
		if (a == 1) {
			int b = console::selecttime();
			switch (b) {
			case 1:
				Sc[0].showlist();
				this->seatindex = console::selectseat();
				if (Sc[0].s[seatindex-1].getrName() == "---") {
					this->reserver = console::reserveName();
					Sc[0].s[seatindex-1].setrName(reserver);
				}
				else {
					cout << "이미 예약되어 있는 자리입니다." << endl;
				}
				break;				
			case 2:
				Sc[1].showlist();
				this->seatindex = console::selectseat();
				if (Sc[1].s[seatindex-1].getrName() == "---") {
					this->reserver = console::reserveName();
					Sc[1].s[seatindex-1].setrName(reserver);
				}
				else {
					cout << "이미 예약되어 있는 자리입니다." << endl;
				}
				break;
			case 3:
				Sc[2].showlist();
				this->seatindex = console::selectseat();
				if (Sc[2].s[seatindex-1].getrName() == "---") {
					this->reserver = console::reserveName();
					Sc[2].s[seatindex-1].setrName(reserver);
				}
				else {
					cout << "이미 예약되어 있는 자리입니다." << endl;
				}
				break;
			default:
				cout << "잘못 입력하셨습니다.";
				break;				
			}
		}
		else if (a == 2) {
			int del = console::selecttime();
			Sc[del-1].showlist();
			this->seatindex = console::selectseat();
			string cancle = console::reserveName();
			if (cancle == Sc[del-1].s[seatindex - 1].getrName()) {
				Sc[del-1].s[seatindex - 1].setrName("---");
			}
			else {
				cout << "예약자가 다릅니다. 이름을 다시 확인하세요." << endl;
			}
		}
		else if (a == 3) {
			for (int i = 0; i < 3; ++i) {
				Sc[i].showlist();
			}
		}
		else if (a == 4) {
			cout << "예약 시스템을 종료합니다.";
			break;
		}
	}


}

Airlinebook::~Airlinebook() {
	delete[] Sc;
}
