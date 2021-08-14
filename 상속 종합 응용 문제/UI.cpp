#include "UI.h"

UI::UI() {};

int UI::menu() {
	int a;
	cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";

	cin >> a;
	return a;
}

int UI::shape() {
	int a;
	cout << "선:1, 원:2, 사각형:3 >> ";
	cin >> a;
	return a;
}

int UI::erase() {
	int a;
	cout << "삭제하고자 하는 도형의 인덱스 >> ";
	cin >> a;
	return a;
}