#include <iostream>
#include <iomanip> // ���������Ӷ�����������

int main() {
	double dVar = 3.14159265;
	std::cout << std::setprecision(3) << dVar << std::endl;
	std::cout << std::setprecision(5) << dVar << std::endl;

	// ����˽���
	int nVar = 223;
	std::cout << std::oct << nVar << std::endl;
	std::cout << std::hex << nVar << std::endl;

	std::cin.get();
	return 0;
}