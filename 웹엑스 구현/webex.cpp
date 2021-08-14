#include "webex.h"

webex::webex() {

};

void webex::startwebex() {
	string profname;
	int smax;
	cout << "강의 교수의 이름을 입력하세요." << endl;
	cin >> profname;
	setproffesor(profname);
	cout << "최대 학생 인원을 설정하세요." << endl;
	cin >> smax;
	this->max = smax;
	s = new student[max];
	int start;
	cout << "1. 학  생    2. 교  수  " << endl;
	cin >> start;
	if (start == 1) {
		addstudent();
		startstudent();
	}
	else if (start == 2) {
		startprofessor();
	};
	
	
}
void webex::setproffesor(string pname) {
	this->p = professor(pname);
}

void webex::addstudent() {
	if (count < max) {
		sindex = count;
		string name;
		string id;
		cout << "이름을 입력하세요." << endl;
		cin >> name;
		cout << "학번을 입력하세요." << endl;
		cin >> id;
		s[count] = student(id, name);
		count++;
	}
	else {
		cout << "인원 초과입니다."<<endl;
	}
}
void webex::sinterface() {
	cout << "--------------------------------Cisco Webex----------------------------------" << endl;
	cout << "l" << this->p.getpname() << " 교수님의 강의룸" << endl;
	cout << "l사용자 : " << this->s[this->sindex].getsname() << endl;
	cout << "l 학번  : " << this->s[this->sindex].getid() << endl;
	cout << "l마이크 : " << this->s[this->sindex].getsmic() << endl;
	cout << "l카메라 : " << this->s[this->sindex].getscam() << endl;
	cout << "공유 중인 화면 : " << p.getshare() << endl<<endl;
	cout << "---------------------------------Chatting------------------------------------" << endl;
	for (int i = 0;i<15; ++i)	{
		if (chatsave[i] == "") {
			cout << ""<<endl;
		}
		else {
			cout << chatsave[i] << endl;
		}
	}
	cout << endl << endl << endl;
	cout << "1.카메라     2.마이크     3.채팅    4.사용자 변경    5.참여자 목록   6.나가기" << endl;

}

void webex::pinterface() {
	cout << "---------------------------------Cisco Webex-----------------------------------" << endl;
	cout << "l" << this->p.getpname() << " 교수님의 강의룸" << endl;
	cout << "l사용자 : " << this->p.getpname() << endl;
	cout << "l화면공유 : " << this->p.getpshare() << endl;
	cout << "l공유 중인 화면 : " << p.getshare() << endl;
	cout << "l마이크 : " << this->p.getpmic() << endl;
	cout << "l카메라 : " << this->p.getpcam() << endl << endl;
	cout << "----------------------------------Chatting-------------------------------------" << endl;
	for (int i = 0; i < 15; ++i) {
		if (chatsave[i] == "") {
			cout << "" << endl;
		}
		else {
			cout  << chatsave[i] << endl;
		}
	}
	cout << endl << endl << endl ;
	cout << "1.카메라  2.마이크  3.화면공유  4.채팅  5.사용자 변경  6.참여자 목록  7.나가기" << endl;

}

void webex::startstudent() {
	int menu;
	sinterface();
	cin >> menu;
	while (menu == 1 || menu == 2 || menu == 3 || menu == 4 || menu == 5) {
		if (menu == 1) {
			s[sindex].setscam();
		}
		else if (menu == 2) {
			s[sindex].setsmic();
		}
		else if (menu == 3) {
			if (chatorder < 15) {
				cout << "입력하세요. : ";
				string text;
				cin.ignore();
				getline(cin,text);
				chatsave[chatorder] = s[sindex].getsname() + " : " + text;
				chatorder++;
			}
			else {
				for (int i = 0; i < 1; i++) {
					chatsave[i] = chatsave[i + 1];
				}
				string text;
				cin.ignore();
				getline(cin,text);
				chatsave[14] = s[sindex].getsname() + " : " + text;
			}
		}
		else if (menu == 4) {
			int user;
			cout << "1.사용자 추가 2.사용자 변경 " << endl;
			cin >> user;
			if (user == 1) {
				addstudent();
			}
			else if (user == 2) {
				int cate;
				cout << "원하는 사용자 종류를 선택하세요. 1.학생   2.교수 " << endl;
				cin >> cate;
				if (cate == 1) {
					int snum;
					cout << "원하는 학생의 번호를 입력하세요." << endl;
					cin >> snum;
					sindex = snum-1;
				}
				else if (cate == 2) {
					startprofessor();
					break;
				}
			}
			else {
				cout << "잘못된 숫자 입력입니다. 다시 시도하세요" << endl;
			}
		}
		else if (menu == 5) {
			for (int i = 0;i==!1;) {
				showlist();
				cout << endl << "1. 나가기" << endl;
				cin >> i;
			}
		}
		else if (menu == 6) {
			break;		
		}

		else {
			cout << "잘못 입력하셨습니다." << endl;
		}
		sinterface();
		cin >> menu;
	}
}

void webex::startprofessor() {
	int menu;
	pinterface();
	cin >> menu;
	while (menu == 1 || menu == 2 || menu == 3 || menu == 4 || menu == 5 || menu == 6) {
		if (menu == 1) {
			p.setpcam();
			
		}
		else if (menu == 2) {
			p.setpmic();
			
		}
		else if (menu == 3) {
			if (p.getpshare() == "off")
			{
				p.setpshare();
				p.setshare();
				
			}
			else if (p.getpshare() == "on") {
				p.setpshare();
				p.sharing = "";
				
			}
		}
		else if (menu == 4){
			if (chatorder < 15) {
				cout << "입력하세요. : ";
				string text;
				cin.ignore();
				getline(cin, text);
				chatsave[chatorder] = p.getpname()+ " : " + text;
				chatorder++;				
			}
			else {
				for (int i = 0; i < 14; i++) {
					chatsave[i] = chatsave[i + 1];
				}
				string text;
				cin.ignore();
				getline(cin, text);
				chatsave[14] = p.getpname() + " : " + text;
			}
		}		
		else if (menu == 5) {
			int user;
			cout << "1.사용자 추가 2.사용자 변경 " << endl;
			cin >> user;
			if (user == 1) {
				addstudent();
				startstudent();
				break;
			}
			else if (user == 2) {
				int cate;
				cout << "원하는 사용자 종류를 선택하세요. 1.학생   2.교수 " << endl;
				cin >> cate;
				if (cate == 1) {
					int snum;
					cout << "원하는 학생의 번호를 입력하세요." << endl;
					cin >> snum;
					sindex = snum-1;
					startstudent();
					break;
				}
				else if (cate == 2) {
					startprofessor();
					break;
				}
				else {
					cout << "잘못된 숫자 입력입니다. 다시 시도하세요" << endl;
				}
			}
		}
		else if (menu == 6) {
			for (int i = 0; i == !1;) {
				showlist();
				cout << endl << "1. 나가기" << endl;
				cin >> i;
			}
		}
		else if (menu == 7) {
			break;
		}
		else {
			cout << "잘못 입력하셨습니다." << endl;
		}
		pinterface();
		cin >> menu;
	}
}
void webex::showlist() {
	cout << "----------------------" << p.getpname() << " 교수님 강의 참여자 목록 " << "------------------------" << endl << endl;
	cout << "최대 인원 : " << this->max << " 명 " << endl; 
	cout << "현재 인원 : " << this->count << " 명 "<<endl;
	cout << "강의교수 : "<<p.getpname() << endl;
	for (int i = 0; i < this->count; ++i) {
		cout << "학생 " << i + 1 << " : " << s[i].getsname() << endl;
	};
}

webex::~webex() {
	delete[] s;
	delete[] chatsave;
};