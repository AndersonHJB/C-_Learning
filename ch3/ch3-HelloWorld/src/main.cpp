#include <iostream>
// 注释：这一行不会被编译，不会对程序有任何影响
int main() {
	// 变量
	std::string sWordsInputed;
	// 字符串 string
	std::cout << "请输入您的名字：>>";
	std::cin >> sWordsInputed;
	//std::cout << "您好," << sWordsInputed;
	std::cout << "您好," << sWordsInputed << std::endl;
	std::cin.get();

	return 0;
}