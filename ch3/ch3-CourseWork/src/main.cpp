#include <iostream>
#include <iomanip>
// ------- 2 -------
#define DISCOUNT 0.88f // 折扣
// ------- end 2 -------

int main() {
	// ------- 1 -------
	std::string sItemName1 = "薯片";
	std::string sItemName2 = "可乐";

	float fItemPrice1 = 2.99f; // 薯片价格
	float fItemPrice2 = 12.5f; // 可乐价格

	int nItemCount1 = 0; // 一开始还没买，所以开始是 0 件
	int nItemCount2 = 0; // 可乐件数

	// 总价
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
		      << std::setiosflags(std::ios::fixed) << std::setprecision(2) <<fDiscountPrice << "\t\t" << std::endl; // 设置有效位数，并且保留几位小数
	std::cin.get();
	// ------- end 4 -------
	return 0;
}