//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//静态成员函数
//	static void func() {
//		age = 20;//静态成员函数可以访问静态成员变量——通用
//		//	报错——age_b = 100;——非静态成员变量——无法区分到底是哪个对象的成员变量
//		cout << "static void func的调用" << endl;
//	}
//	static int age;	//静态成员变量
//	int age_b;//非静态成员变量
//private:
//	static void func01() {
//		cout << "static void func01的调用" << endl;
//	}
//};
//int Person::age = 18;
//void test01() {
//	//1.通过对象进行访问
//	Person p;
//	p.func();
//	//2.通过类名进行访问
//	Person::func();
//
//	//类外访问不到私有的静态成员函数
//	//——报错Person::func01();
//}
//int main() {
//	test01();
//}