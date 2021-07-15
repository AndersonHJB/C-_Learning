#include <iostream>

int main() {
	// 变量的声明
	int nVar;
	short shVar;
	long lVar;
	char cVar;
	// 变量的声明以及初始化
	float fVar = 2.71f;
	//float fVar2 = 2.f; // 有时候我实在是想它是个小数，但它后面没有，我们可以像前面这么写，也可以用 2.0f；
	double dVar = 3.1415926;

	// 给变量赋值
	nVar = 10;
	shVar = 2;
	lVar = 20210713;
	cVar = 'a';

	std::cout << "类型\t\t" << "值" << std::endl;
	std::cout << "int\t\t" << sizeof(int) << "\t\t" << nVar << std::endl;
	std::cout << "long\t\t" << sizeof(long) << "\t\t" << lVar << std::endl;
	std::cout << "double\t\t" << sizeof(double) << "\t\t" << dVar << std::endl;
	std::cin.get();
	return 0;
}