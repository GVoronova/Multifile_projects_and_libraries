#include "Triangle.h"
#include <iostream>

Triangle::Triangle() {

	name = "�����������";
	sides = 3;
}

void Triangle::printTriangle() {
	std::cout << name << ": " << std::endl;

	std::cout << "�������: a = " << a;
	std::cout << " b = " << b;
	std::cout << " c = " << c << std::endl;
	std::cout << "����: A = " << A;
	std::cout << " B = " << B;
	std::cout << " C = " << C << std::endl;
	std::cout << std::endl;
}