#include <iostream>


int showItemName(std::string name) {
	// 执行一系列操作
	std::cout << name << std::endl; // std::endl 表示换行符
	return 0;
}
//int main(参数列表) {
//	具体做什么事情;
//	做完之后总得给我们个信息吧，我做完了。
//	老板我事情做好了（老师成绩平均分都算好啦）; return 0;
//	那要是没有做好，我就得给你说没有做好;
//	所以，我们在代码中约定俗成，返回 0 ，如果事情没有做好就得放回别的数字。
//}

// PS：返回值，就像平时访问网页时出现 404 、301 之类的，不同状态码代表不同问题。返回值同理
int main() {
	// 商品的名称 声明变量
	std::string itemName1;
	std::string itemName2;
	//std::string Name1, Name2;
	//std::string Name1 = "aiyc", Name2 = "aiyuechuang";


	itemName1 = "可乐";
	itemName2 = "薯片";

	std::cout << itemName1 << std::endl;
	std::cout << itemName2 << std::endl;

	showItemName(itemName1);
	showItemName(itemName2);
	std::cin.get();

	return 0;
}