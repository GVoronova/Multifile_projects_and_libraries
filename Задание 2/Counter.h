#pragma once
#include <string>

class Counter {
private:
	int num;
public:
	Counter() {
		num = 0;
	}
	Counter(int num) {
		this->num = num;
	}
	void changeNum(std::string);
	int get_num();
};