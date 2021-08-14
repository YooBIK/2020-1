#include "webex.h"

webex::webex() {

};

void webex::startwebex() {
	string profname;
	int smax;
	cout << "���� ������ �̸��� �Է��ϼ���." << endl;
	cin >> profname;
	setproffesor(profname);
	cout << "�ִ� �л� �ο��� �����ϼ���." << endl;
	cin >> smax;
	this->max = smax;
	s = new student[max];
	int start;
	cout << "1. ��  ��    2. ��  ��  " << endl;
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
		cout << "�̸��� �Է��ϼ���." << endl;
		cin >> name;
		cout << "�й��� �Է��ϼ���." << endl;
		cin >> id;
		s[count] = student(id, name);
		count++;
	}
	else {
		cout << "�ο� �ʰ��Դϴ�."<<endl;
	}
}
void webex::sinterface() {
	cout << "--------------------------------Cisco Webex----------------------------------" << endl;
	cout << "l" << this->p.getpname() << " �������� ���Ƿ�" << endl;
	cout << "l����� : " << this->s[this->sindex].getsname() << endl;
	cout << "l �й�  : " << this->s[this->sindex].getid() << endl;
	cout << "l����ũ : " << this->s[this->sindex].getsmic() << endl;
	cout << "lī�޶� : " << this->s[this->sindex].getscam() << endl;
	cout << "���� ���� ȭ�� : " << p.getshare() << endl<<endl;
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
	cout << "1.ī�޶�     2.����ũ     3.ä��    4.����� ����    5.������ ���   6.������" << endl;

}

void webex::pinterface() {
	cout << "---------------------------------Cisco Webex-----------------------------------" << endl;
	cout << "l" << this->p.getpname() << " �������� ���Ƿ�" << endl;
	cout << "l����� : " << this->p.getpname() << endl;
	cout << "lȭ����� : " << this->p.getpshare() << endl;
	cout << "l���� ���� ȭ�� : " << p.getshare() << endl;
	cout << "l����ũ : " << this->p.getpmic() << endl;
	cout << "lī�޶� : " << this->p.getpcam() << endl << endl;
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
	cout << "1.ī�޶�  2.����ũ  3.ȭ�����  4.ä��  5.����� ����  6.������ ���  7.������" << endl;

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
				cout << "�Է��ϼ���. : ";
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
			cout << "1.����� �߰� 2.����� ���� " << endl;
			cin >> user;
			if (user == 1) {
				addstudent();
			}
			else if (user == 2) {
				int cate;
				cout << "���ϴ� ����� ������ �����ϼ���. 1.�л�   2.���� " << endl;
				cin >> cate;
				if (cate == 1) {
					int snum;
					cout << "���ϴ� �л��� ��ȣ�� �Է��ϼ���." << endl;
					cin >> snum;
					sindex = snum-1;
				}
				else if (cate == 2) {
					startprofessor();
					break;
				}
			}
			else {
				cout << "�߸��� ���� �Է��Դϴ�. �ٽ� �õ��ϼ���" << endl;
			}
		}
		else if (menu == 5) {
			for (int i = 0;i==!1;) {
				showlist();
				cout << endl << "1. ������" << endl;
				cin >> i;
			}
		}
		else if (menu == 6) {
			break;		
		}

		else {
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
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
				cout << "�Է��ϼ���. : ";
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
			cout << "1.����� �߰� 2.����� ���� " << endl;
			cin >> user;
			if (user == 1) {
				addstudent();
				startstudent();
				break;
			}
			else if (user == 2) {
				int cate;
				cout << "���ϴ� ����� ������ �����ϼ���. 1.�л�   2.���� " << endl;
				cin >> cate;
				if (cate == 1) {
					int snum;
					cout << "���ϴ� �л��� ��ȣ�� �Է��ϼ���." << endl;
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
					cout << "�߸��� ���� �Է��Դϴ�. �ٽ� �õ��ϼ���" << endl;
				}
			}
		}
		else if (menu == 6) {
			for (int i = 0; i == !1;) {
				showlist();
				cout << endl << "1. ������" << endl;
				cin >> i;
			}
		}
		else if (menu == 7) {
			break;
		}
		else {
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
		}
		pinterface();
		cin >> menu;
	}
}
void webex::showlist() {
	cout << "----------------------" << p.getpname() << " ������ ���� ������ ��� " << "------------------------" << endl << endl;
	cout << "�ִ� �ο� : " << this->max << " �� " << endl; 
	cout << "���� �ο� : " << this->count << " �� "<<endl;
	cout << "���Ǳ��� : "<<p.getpname() << endl;
	for (int i = 0; i < this->count; ++i) {
		cout << "�л� " << i + 1 << " : " << s[i].getsname() << endl;
	};
}

webex::~webex() {
	delete[] s;
	delete[] chatsave;
};