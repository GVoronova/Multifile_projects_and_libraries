#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "RT.h"
#include "IT.h"
#include "ET.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Diamond.h"



int main() {


	setlocale(LC_ALL, "Russian");

	Triangle tri;
	tri.printTriangle();
	RightTriangle rt;
	rt.printTriangle();
	IsoscelesTriangle it;
	it.printTriangle();
	EquilateralTriangle et;
	et.printTriangle();
	Quadrangle quadr;
	quadr.printQuadrangle();
	Rectangle rect;
	rect.printQuadrangle();
	Square square;
	square.printQuadrangle();
	Parallelogram paral;
	paral.printQuadrangle();
	Diamond diamond;
	diamond.printQuadrangle();


	return 0;
}