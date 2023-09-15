#include <iostream>
#include "Функции.h"

int main() {
	
	setlocale(LC_ALL, "Russian");

	int num1;
	int num2;
	int operation;
	Calculator function;
	
	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> operation;

	if (operation == 1) {
		std::cout << num1 << " плюс " << num2 << " = " << function.adding(num1, num2) << std::endl;
	}
	else if (operation == 2) {
		
		std::cout << num1 << " минус " << num2 << " = " << function.subtraction(num1, num2) << std::endl;
	}
	else if (operation == 3) {
		std::cout << num1 << " умножить на " << num2 << " = " << function.multiplication(num1, num2) << std::endl;
	}
	else if (operation == 4) {
		std::cout << num1 << " разделить на " << num2 << " = " << function.division(num1, num2) << std::endl;
	}
	else if (operation == 5) {
		std::cout << num1 << " в степени " << num2 << " = " << function.pow(num1, num2) << std::endl;
	}
	else {
		std::cout << "Введена некорректная команда. Программа будет завершена" << std::endl;
	}

	return 0;
}