#include <iostream>

void add(int& value) {
	value++;
}

void add2(int* value) {
	(*value)++;
}

int main() {
	int var = 8;
	int* ptr = &var;
	std::cout << *ptr << std::endl;
	*ptr = 10;
	std::cout << *ptr << std::endl;
	int& Var = var;
	Var = 16;
	std::cout << var << std::endl;
	add(var);
	std::cout << var << std::endl;
	return 0;
}