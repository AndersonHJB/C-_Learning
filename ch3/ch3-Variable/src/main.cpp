#include <iostream>

int main() {
	// ����������
	int nVar;
	short shVar;
	long lVar;
	char cVar;
	// �����������Լ���ʼ��
	float fVar = 2.71f;
	//float fVar2 = 2.f; // ��ʱ����ʵ���������Ǹ�С������������û�У����ǿ�����ǰ����ôд��Ҳ������ 2.0f��
	double dVar = 3.1415926;

	// ��������ֵ
	nVar = 10;
	shVar = 2;
	lVar = 20210713;
	cVar = 'a';

	std::cout << "����\t\t" << "ֵ" << std::endl;
	std::cout << "int\t\t" << sizeof(int) << "\t\t" << nVar << std::endl;
	std::cout << "long\t\t" << sizeof(long) << "\t\t" << lVar << std::endl;
	std::cout << "double\t\t" << sizeof(double) << "\t\t" << dVar << std::endl;
	std::cin.get();
	return 0;
}