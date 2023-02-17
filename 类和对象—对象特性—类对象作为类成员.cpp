//#include<iostream>
//using namespace std;
//class A {
//public:
//	A() {
//		cout << "A的构造函数" << endl;
//	}
//	~A() {
//		cout << "A的析构函数" << endl;
//	}
//};
//class B {
//public:
//	B() {
//		cout << "B的构造函数" << endl;
//	}
//	~B() {
//		cout << "B的析构函数" << endl;
//	}
//	A a;
//};
////当其他类对象作为本类成员，构造时候先构造类对象，再构造自身
//void test01() {
//	A m_a;
//	B b;
//}
//int main() {
//	test01();
//}