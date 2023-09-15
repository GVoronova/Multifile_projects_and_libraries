#include "Counter.h"
#include <iostream>

void Counter::changeNum(std::string action) {
	action == "+" ? num = ++num : num = --num;
}

int Counter::get_num() {
	return num;
}