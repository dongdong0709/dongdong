//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//��̬��Ա����
//	static void func() {
//		age = 20;//��̬��Ա�������Է��ʾ�̬��Ա��������ͨ��
//		//	������age_b = 100;�����Ǿ�̬��Ա���������޷����ֵ������ĸ�����ĳ�Ա����
//		cout << "static void func�ĵ���" << endl;
//	}
//	static int age;	//��̬��Ա����
//	int age_b;//�Ǿ�̬��Ա����
//private:
//	static void func01() {
//		cout << "static void func01�ĵ���" << endl;
//	}
//};
//int Person::age = 18;
//void test01() {
//	//1.ͨ��������з���
//	Person p;
//	p.func();
//	//2.ͨ���������з���
//	Person::func();
//
//	//������ʲ���˽�еľ�̬��Ա����
//	//��������Person::func01();
//}
//int main() {
//	test01();
//}