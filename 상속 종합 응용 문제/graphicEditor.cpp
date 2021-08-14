#include "graphicEditor.h"
using namespace std;

graphicEditor::graphicEditor() {
	this->start = this-> end = NULL;
	this->size = 0;
}

void graphicEditor::selectshape(int b) {
	if (this->size == 0) {
		switch (b) {
		case 1: {
			this->start = new line;
			this->end = this->start;	
			size++;
			break;
		}
		case 2: {
			this->start = new circle;
			this->end = this->start;	
			size++;
			break;		
		}
		case 3: {
			this->start = new rect;
			this->end = this->start;	
			size++;
			break;
		}
		default: {
			cout << "�߸� �Է� �ϼ̽��ϴ�." << endl;		
			break;
		}
		}
	}
	else {
		switch (b) {
		case 1: {
			end = end->add(new line);
			size++;		
			break;
		}
		case 2: {
			end = end->add(new circle);
			size++;			
			break;		
		}
		case 3: {
			end = end->add(new rect);
			size++;
			break; 
		}
		default: {
			cout << "�߸� �Է� �ϼ̽��ϴ�." << endl;
			break;
		}
		}
	}
}


void graphicEditor::showlist() {
	shape* p;
	p = start;
	for (int i = 0; i < size; ++i) {
		cout << i << " : ";
		p->paint();
		p = p->getnext();
	}
}

void graphicEditor::eraseindex() {
	shape* a;
	shape* b;
	a = b = start;
	int e = UI::erase();
	if (this->size == 0) {
		cout << "���� ��ü�� �����ϼ���." << endl;
	}
	else if (e < this->size) {
		if (e == 0) {
			a = start->getnext();
			start = a;
		}
		else {
			for (int i = 0; i < e; ++i) {
				a = b;
				b = b->getnext();
			}
			a->setnext(b->getnext());
		}
		delete b;
		size--;
	}
	else {
		cout << "�߸� �Է� �ϼ̽��ϴ�." << endl;
	}
}

void graphicEditor::startGE(){
	
	cout << "�׷��� ������ �Դϴ�." << endl;
	int a;	
	while (1) {
		a = UI::menu();
		if (a == 1) {
			int b = UI::shape();
			selectshape(b);
			}
		else if (a == 2) {
			eraseindex();
		}
		else if (a == 3) {
			showlist();
		}
		else if (a == 4) {
			break;
		}
		else {
			cout << "�߸� �Է��ϼ̽��ϴ�. " << endl;
		}
	}	
}