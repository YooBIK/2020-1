#include "shape.h"
#include <iostream>
using namespace std;

void shape::paint() {
	draw();
}

shape* shape::add(shape* p) {
	this->next = p;
	return p;
}

void shape::setnext(shape *p) {
	this->next = p;
}