//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//静态成员变量
//	static int age;	//类内声明
//};
//int Person::age = 18;	//Person作用域下的——类外初始化
//void test01() {
//	Person p;
//	cout << p.age << endl;
//	Person p1;
//	p1.age = 20;//——大家共享的数据
//	cout << p.age << endl;	//20——
//}
//void test02() {
//	//静态成员变量不属于某个对象上，大家所有对象都共享同一数据
//	//因此静态成员变量有两种访问方式
//	//1.通过对象进行访问
//	Person p;
//	cout << p.age << endl;
//	//2.通过类名进行访问
//	cout << Person::age << endl;
//}
//int main() {
//	/*test01();*/
//	test02();
//}