#include <iostream>

int main() {
	int nVar = 1;
	std::cout << nVar++ << std::endl; // 1
	std::cout << ++nVar << std::endl; // 3
	nVar++;
	std::cout << nVar << std::endl; // 4

	++nVar;
	std::cout << nVar << std::endl; // 5

	std::cout << nVar++ << std::endl; // 5
	std::cin.get();
}