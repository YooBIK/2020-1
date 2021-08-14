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
					cout << "�̹� ����Ǿ� �ִ� �ڸ��Դϴ�." << endl;
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
					cout << "�̹� ����Ǿ� �ִ� �ڸ��Դϴ�." << endl;
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
					cout << "�̹� ����Ǿ� �ִ� �ڸ��Դϴ�." << endl;
				}
				break;
			default:
				cout << "�߸� �Է��ϼ̽��ϴ�.";
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
				cout << "�����ڰ� �ٸ��ϴ�. �̸��� �ٽ� Ȯ���ϼ���." << endl;
			}
		}
		else if (a == 3) {
			for (int i = 0; i < 3; ++i) {
				Sc[i].showlist();
			}
		}
		else if (a == 4) {
			cout << "���� �ý����� �����մϴ�.";
			break;
		}
	}


}

Airlinebook::~Airlinebook() {
	delete[] Sc;
}
