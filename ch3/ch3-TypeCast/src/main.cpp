#include <iostream>

int main() {
	int nVar1 = 10, nVar2 = 3;
	float fResult;
	fResult = nVar1 / nVar2;
	std::cout << fResult << std::endl; // 3

	fResult = (float)(nVar1 / nVar2); // ���ǰ�����֮��Ľ����float
	std::cout << fResult << std::endl; // 3

	fResult = (float)nVar1 / nVar2; // 3.33333
	std::cout << fResult << std::endl;

	fResult = nVar1 / nVar2; // ���ǿ��ת���ǰ�ԭ������������Ҳ�ı��ˣ������д����ֵӦ�ú�����һ����
	std::cout << fResult << std::endl; // 3
	std::cin.get();
	return 0;
}