#include "UI.h"


 int UI::selectmenu() {
	 cout << "----------------���ϴ� �޴��� �����ϼ���.---------------" << endl;
	 cout << "1.���� �Է�   2.��ü ���� ��ȸ   3.�� ���� ��ȸ   4.����" << endl;
	 int menu;
	 cin >> menu;
	 return menu;
}

 int UI::inputclass() {
	 cout << "���� �Է��ϼ���.  1.   2.   3.  "<<endl;
	 int a;
	 cin >> a;
	 return a;
 }

 string UI::inputname() {
	 cout << "�̸��� �Է��ϼ���." << endl;
	 string s;
	 cin>> s;
	 return s;
 }

 double UI::inputscore() {
	 cout << "������ �Է��ϼ���." << endl;
	 double d;
	 cin >> d;
	 return d;
 }
