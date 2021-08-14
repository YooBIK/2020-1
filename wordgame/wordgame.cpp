#include "wordgame.h"
#include <iostream>
#include <string>

wordgame::wordgame() {
	nplayer = 3;
	startword = "���ٱ�";
}

wordgame::~wordgame() {
	delete[] players;
}
void wordgame::startgame() {
	cout << "���� �ձ� ������ �����մϴ�."<< endl;
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
	cin >> nplayer;
	
	createplayers(nplayer);
	playgame();
}

void wordgame::createplayers(int n) {
	players = new player[n];
	string playername;
	for (int i = 0; i < n; ++i) {
		cout << "�̸��� �Է��ϼ���(��ĭ����): ";
		cin >> playername;
		players[i].setname(playername);
	}
}

void wordgame::playgame() {
	int i=0;
	string a;
	cout << "���� �ܾ�� " << startword << "�Դϴ�." << endl;
	while (1) {
		cout << players[i % nplayer].getname() << "�����Դϴ�." << endl;
		cout << "�ܾ �Է��ϼ��� : ";
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
			cout << players[i % nplayer].getname() << " Ż�� !! ";
			break;
		}
	}	
}