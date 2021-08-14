#include "UI.h"


 int UI::selectmenu() {
	 cout << "----------------원하는 메뉴를 선택하세요.---------------" << endl;
	 cout << "1.성적 입력   2.전체 성적 조회   3.반 성적 조회   4.종료" << endl;
	 int menu;
	 cin >> menu;
	 return menu;
}

 int UI::inputclass() {
	 cout << "반을 입력하세요.  1.   2.   3.  "<<endl;
	 int a;
	 cin >> a;
	 return a;
 }

 string UI::inputname() {
	 cout << "이름을 입력하세요." << endl;
	 string s;
	 cin>> s;
	 return s;
 }

 double UI::inputscore() {
	 cout << "성적을 입력하세요." << endl;
	 double d;
	 cin >> d;
	 return d;
 }
