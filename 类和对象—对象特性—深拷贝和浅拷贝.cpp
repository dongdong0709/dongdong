//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int a,int h) {
//		age = a;
//		height = new int(h);	//����ָ��ȥ�������new������
//		cout << "Person���вι��캯���ĵ���" << endl;
//	}
//	/*Person(const Person& p) {
//		age = p.age;
//		cout << "Person�Ŀ������캯���ĵ���" << endl;
//	}*/
//	//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
//	Person(const Person& p) {
//		age = p.age;
//		//height = p.height;	ǳ���� ������Ĭ��ʵ�����д���
//		//�������
//		height = new int(*p.height);
//		cout << "Person�Ŀ������캯���ĵ���" << endl;
//	}
//	~Person() {
//		//�������롪�����������ٵ����ݽ����ͷŲ���
//		if (height != NULL) {
//			delete height;
//			height = NULL;
//		}
//		cout << "Person�����������ĵ���" << endl;
//	}
//	int age;
//	int* height;
//};
//void test01() {
//	Person p1(18,160);
//	cout << "p1�������ж��" << p1.age <<"p1�����Ϊ���٣�"<<*p1.height << endl;
//	Person p2(p1);
//	cout << "p2�������ж��" << p2.age <<"p2�����Ϊ���٣�"<<*p2.height << endl;
//}
//int main() {
//	test01();
//}