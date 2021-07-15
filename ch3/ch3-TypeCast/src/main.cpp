#include <iostream>

int main() {
	int nVar1 = 10, nVar2 = 3;
	float fResult;
	fResult = nVar1 / nVar2;
	std::cout << fResult << std::endl; // 3

	fResult = (float)(nVar1 / nVar2); // 它是把运算之后的结果，float
	std::cout << fResult << std::endl; // 3

	fResult = (float)nVar1 / nVar2; // 3.33333
	std::cout << fResult << std::endl;

	fResult = nVar1 / nVar2; // 如果强制转换是把原本的数据类型也改变了，那这行代码的值应该和上面一样。
	std::cout << fResult << std::endl; // 3
	std::cin.get();
	return 0;
}