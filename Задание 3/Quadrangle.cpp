#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle() {
	sides = 4;
	name = "���������������";
}
void Quadrangle::printQuadrangle() {
	std::cout << name << ": " << std::endl;

	std::cout << "�������: a = " << a;
	std::cout << " b = " << b;
	std::cout << " c = " << c;
	std::cout << " d = " << d << std::endl;
	std::cout << "����: A = " << A;
	std::cout << " B = " << B;
	std::cout << " C = " << C;
	std::cout << " D = " << D << std::endl;
	std::cout << std::endl;
}