#include "UI.h"

UI::UI() {};

int UI::menu() {
	int a;
	cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";

	cin >> a;
	return a;
}

int UI::shape() {
	int a;
	cout << "��:1, ��:2, �簢��:3 >> ";
	cin >> a;
	return a;
}

int UI::erase() {
	int a;
	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	cin >> a;
	return a;
}