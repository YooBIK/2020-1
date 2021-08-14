#include "wordgame.h"
#include <iostream>
#include <string>

wordgame::wordgame() {
	nplayer = 3;
	startword = "뻐꾸기";
}

wordgame::~wordgame() {
	delete[] players;
}
void wordgame::startgame() {
	cout << "끝말 잇기 게임을 시작합니다."<< endl;
	cout << "게임에 참가하는 인원은 몇명입니까?";
	cin >> nplayer;
	
	createplayers(nplayer);
	playgame();
}

void wordgame::createplayers(int n) {
	players = new player[n];
	string playername;
	for (int i = 0; i < n; ++i) {
		cout << "이름을 입력하세요(빈칸없이): ";
		cin >> playername;
		players[i].setname(playername);
	}
}

void wordgame::playgame() {
	int i=0;
	string a;
	cout << "시작 단어는 " << startword << "입니다." << endl;
	while (1) {
		cout << players[i % nplayer].getname() << "차례입니다." << endl;
		cout << "단어를 입력하세요 : ";
		cin >> a;
		players[i % nplayer].sayword(a);
		int length = startword.size();

		if (players[i % nplayer].getword().at(0) == startword.at(length - 2) && players[i % nplayer].getword().at(1) == startword.at(length - 1))
		{
			startword = a;
			++i;
		}
		else
		{	
			cout << players[i % nplayer].getname() << " 탈락 !! ";
			break;
		}
	}	
}