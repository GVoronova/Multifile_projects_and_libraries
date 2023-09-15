#include "Triangle.h"
#include <iostream>

Triangle::Triangle() {

	name = "Треугольник";
	sides = 3;
}

void Triangle::printTriangle() {
	std::cout << name << ": " << std::endl;

	std::cout << "Стороны: a = " << a;
	std::cout << " b = " << b;
	std::cout << " c = " << c << std::endl;
	std::cout << "Углы: A = " << A;
	std::cout << " B = " << B;
	std::cout << " C = " << C << std::endl;
	std::cout << std::endl;
}