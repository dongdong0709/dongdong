//#include<iostream>
//using namespace std;
////������
//class Person {
//public:
//	//thisָ��ı��ʣ�ָ�볣������ָ���ָ���ǲ������޸ĵ�
//	//Person *const this;
//	void showPerson()const {	//������ //�˴�����const��ָ����ָ���ֵҲ�������޸���
//		//���ε���thisָ��	const Person *const this
//		this->m_age = 100;
//		//this->age = 100;
//		// this = NULL;//thisָ�벻�����޸�ָ���ָ��
//	}
//	void func() {
//
//	}
//	int age;
//	mutable int m_age;//��ʹ���ڳ������У�Ҳ�����޸����ֵ
//};
//void test01() {
//	Person p;
//	p.showPerson();
//}
////������
//void test02() {
//	const Person p;//������
//	//p.age = 100;
//	p.m_age = 100;//���޸�
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	//p.func();
//}
//int main() {
//	test02();
//}