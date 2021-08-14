#pragma once
#include "shape.h"
#include "UI.h"
#include "line.h"
#include "circle.h"
#include "rect.h"

class graphicEditor
{
	shape* start ;
	shape *end ;
	int size = 0;
public:
	graphicEditor();
    void selectshape(int b);
	void showlist();
	void eraseindex();
	void startGE();

};

