//#include<iostream>
//using namespace std;
//class Person {
//	int age;//非静态成员变量	属于类对象上
//	static int age_b;//静态成员变量	不属于类对象上
//	void func() {	//非静态成员函数 不属于类对象上
//
//	}
//	static void func02() {//静态成员函数
//
//	}
//};
//int Person::age_b = 0;
//void test01() {
//	Person p1;
//	cout << "sizeof p=" << sizeof(p1) << endl;//空对象占用的内存空间为1
//}
//void test02() {
//	Person p1;
//	cout << "sizeof p=" << sizeof(p1) << endl;//空对象占用的内存空间为4
//}
//int main() {
//	//test01();
//	test02();
//}