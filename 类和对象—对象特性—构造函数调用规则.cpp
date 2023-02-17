//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person(){
//		cout << "Person默认构造函数的调用" << endl;
//	}
//	Person(int a) {
//		age = a;
//		cout << "Person有参函数的调用" << endl;
//	}
//	/*Person(const Person& p) {
//		age = p.age;
//		cout << "Person拷贝构造函数的调用" << endl;
//	}*/
//	~Person() {
//		cout << "Person析构函数的调用" << endl;
//	}
//	int age;
//};
//void test01() {
//	Person p;
//	p.age = 18;
//	Person p1(p);
//	cout << "p1的年龄为：" << p1.age << endl;
//}
//int main() {
//	test01();
//	system("pause");
//}