#include <iostream>
#include <iomanip> // 流操作算子定义在这里面

int main() {
	double dVar = 3.14159265;
	std::cout << std::setprecision(3) << dVar << std::endl;
	std::cout << std::setprecision(5) << dVar << std::endl;

	// 输出八进制
	int nVar = 223;
	std::cout << std::oct << nVar << std::endl;
	std::cout << std::hex << nVar << std::endl;

	std::cin.get();
	return 0;
}