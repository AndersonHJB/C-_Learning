#include <iostream>
#include <iomanip>
// ------- 2 -------
#define DISCOUNT 0.88f // �ۿ�
// ------- end 2 -------

int main() {
	// ------- 1 -------
	std::string sItemName1 = "��Ƭ";
	std::string sItemName2 = "����";

	float fItemPrice1 = 2.99f; // ��Ƭ�۸�
	float fItemPrice2 = 12.5f; // ���ּ۸�

	int nItemCount1 = 0; // һ��ʼ��û�����Կ�ʼ�� 0 ��
	int nItemCount2 = 0; // ���ּ���

	// �ܼ�
	float fTotalPrice = 0;
	float fDiscountPrice = 0;
	// ------- end 1 -------

	// ------- 3 -------
	std::cout << sItemName1 << "\t\t" << fItemPrice1 << "\t\t" << nItemCount1 << std::endl;
	std::cout << sItemName2 << "\t\t" << fItemPrice2 << "\t\t" << nItemCount2 << std::endl;
	std::cout << "total:>>>" << fTotalPrice << "\t\t" << fDiscountPrice << "\t\t" << std::endl;
	// ------- end 3 -------
	// ------- 4 -------
	nItemCount1++;
	//nItemCount1 += 1;
	//nItemCount1 = nItemCount1 + 1;
	nItemCount2++;
	nItemCount1++;

	fTotalPrice = nItemCount1 * fItemPrice1 + nItemCount2 * fItemPrice2;
	fDiscountPrice = fTotalPrice * DISCOUNT;

	std::cout << std::endl;

	std::cout << sItemName1 << "\t\t" << fItemPrice1 << "\t\t" << nItemCount1 << std::endl;
	std::cout << sItemName2 << "\t\t" << fItemPrice2 << "\t\t" << nItemCount2 << std::endl;
	//std::cout << "total:>>>" << fTotalPrice << "\t\t" << fDiscountPrice << "\t\t" << std::endl;
	std::cout << "total:>>>" << fTotalPrice << "\t\t"
		      << std::setiosflags(std::ios::fixed) << std::setprecision(2) <<fDiscountPrice << "\t\t" << std::endl; // ������Чλ�������ұ�����λС��
	std::cin.get();
	// ------- end 4 -------
	return 0;
}