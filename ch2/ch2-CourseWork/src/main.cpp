#include <iostream>


int showItemName(std::string name) {
	// ִ��һϵ�в���
	std::cout << name << std::endl; // std::endl ��ʾ���з�
	return 0;
}
//int main(�����б�) {
//	������ʲô����;
//	����֮���ܵø����Ǹ���Ϣ�ɣ��������ˡ�
//	�ϰ������������ˣ���ʦ�ɼ�ƽ���ֶ��������; return 0;
//	��Ҫ��û�����ã��Ҿ͵ø���˵û������;
//	���ԣ������ڴ�����Լ���׳ɣ����� 0 ���������û�����þ͵÷Żر�����֡�
//}

// PS������ֵ������ƽʱ������ҳʱ���� 404 ��301 ֮��ģ���ͬ״̬�����ͬ���⡣����ֵͬ��
int main() {
	// ��Ʒ������ ��������
	std::string itemName1;
	std::string itemName2;
	//std::string Name1, Name2;
	//std::string Name1 = "aiyc", Name2 = "aiyuechuang";


	itemName1 = "����";
	itemName2 = "��Ƭ";

	std::cout << itemName1 << std::endl;
	std::cout << itemName2 << std::endl;

	showItemName(itemName1);
	showItemName(itemName2);
	std::cin.get();

	return 0;
}