#include "Функции.h"

int Calculator::adding(int num1, int num2) {
	return num1 + num2;
}

int Calculator::subtraction(int num1, int num2) {
	return num1 - num2;
}

int Calculator::multiplication(int num1, int num2) {
	return num1 * num2;
}

int Calculator::division(int num1, int num2) {
	return num1 / num2;
}
int Calculator::pow(int num1, int num2) {
	int result = 1;
	for (int i = 0; i < num2; ++i) {
		result = result * num1;
	} return result;
}