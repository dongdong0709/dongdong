//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person(int age) {
//		this->age = age;
//	}
//	void PersonAddAge1(Person& p) {
//		this->age += p.age;
//	}
//	Person& PersonAddAge2(Person& p) {
//		this->age += p.age;
//		return *this;//���ر��塪���Ӷ�Ҫ�����õķ�ʽ����Person &
//	}
//	Person PersonAddAge3(Person& p) {
//		this->age += p.age;
//		return *this;//����������Person,һ��ֵ������ôÿ�η��ض�����һ���µĶ�����
//	}
//	int age;
//};
////1.������Ƴ�ͻ
//void test01() {
//	Person p1(18);
//	cout << "p������Ϊ��" << p1.age << endl;
//}
////2.���ض�������*this
//void test02() {
//	Person p1(10);
//	Person p2(10);
//	Person p3(10);
//	Person p4(10);
//	p2.PersonAddAge1(p1);
//	//��ʽ���˼��
//	p3.PersonAddAge2(p1).PersonAddAge2(p1).PersonAddAge2(p1);
//	p4.PersonAddAge3(p1).PersonAddAge3(p1).PersonAddAge3(p1);
//	cout << "p2������Ϊ��" << p2.age << endl;
//	cout << "p3������Ϊ��" << p3.age << endl;
//	cout << "p4������Ϊ��" << p4.age << endl;
//}
//int main() {
//	//test01();
//	test02();
//}