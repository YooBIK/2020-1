#pragma once
#include <iostream>
#include <string>
using namespace std;

class shape
{
	shape* next;
protected:
	virtual void draw() = 0;
public:
	shape() { next = NULL; }
	virtual ~shape() {}
	void paint();
	shape* add(shape* p);
	shape* getnext() { return next; };
	void setnext(shape *p);
};