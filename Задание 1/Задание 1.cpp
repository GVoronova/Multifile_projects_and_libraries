#include <iostream>
#include "�������.h"

int main() {
	
	setlocale(LC_ALL, "Russian");

	int num1;
	int num2;
	int operation;
	Calculator function;
	
	std::cout << "������� ������ �����: ";
	std::cin >> num1;
	std::cout << "������� ������ �����: ";
	std::cin >> num2;
	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	std::cin >> operation;

	if (operation == 1) {
		std::cout << num1 << " ���� " << num2 << " = " << function.adding(num1, num2) << std::endl;
	}
	else if (operation == 2) {
		
		std::cout << num1 << " ����� " << num2 << " = " << function.subtraction(num1, num2) << std::endl;
	}
	else if (operation == 3) {
		std::cout << num1 << " �������� �� " << num2 << " = " << function.multiplication(num1, num2) << std::endl;
	}
	else if (operation == 4) {
		std::cout << num1 << " ��������� �� " << num2 << " = " << function.division(num1, num2) << std::endl;
	}
	else if (operation == 5) {
		std::cout << num1 << " � ������� " << num2 << " = " << function.pow(num1, num2) << std::endl;
	}
	else {
		std::cout << "������� ������������ �������. ��������� ����� ���������" << std::endl;
	}

	return 0;
}