//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "PersonĬ�Ϲ��캯���ĵ���" << endl;
//	}
//	Person(int a) {
//		age = a;
//		cout << "Person�вκ����ĵ���" << endl;
//	}
//	Person(const Person& p) {
//		age = p.age;
//		cout << "Person�������캯���ĵ���" << endl;
//	}
//	~Person() {
//		cout << "Person���������ĵ���" << endl;
//	}
//	int age;
//};
////ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01() {
//	Person p1(10);
//	Person p2(p1);//�������캯��
//	cout << "p2������Ϊ��" << p2.age << endl;
//}
////ֵ���ݵķ�ʽ������������ֵ
//void dowork(Person p) {
//
//}
//void test02() {
//	Person p;
//	dowork(p);//�����ȼ��ڿ������캯��
//}
//
////��ֵ��ʽ���ؾֲ�����
//Person dowork2() {
//	Person p1;
//	cout << "p1�ĵ�ַΪ��" << (int*)&p1 << endl;
//	return p1;
//}
//void test03() {
//	Person p = dowork2();
//	cout << "p�ĵ�ַΪ��" << (int*)&p << endl;
//}
//int main() {
//	/*test01();*/
//	/*test02();*/
//	test03();
//	system("pause");
//
//}