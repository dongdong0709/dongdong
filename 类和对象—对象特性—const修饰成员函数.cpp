//#include<iostream>
//using namespace std;
////常函数
//class Person {
//public:
//	//this指针的本质：指针常量——指针的指向是不可以修改的
//	//Person *const this;
//	void showPerson()const {	//常函数 //此处加上const后，指针所指向的值也不可以修改了
//		//修饰的是this指向	const Person *const this
//		this->m_age = 100;
//		//this->age = 100;
//		// this = NULL;//this指针不可以修改指针的指向
//	}
//	void func() {
//
//	}
//	int age;
//	mutable int m_age;//即使是在常函数中，也可以修改这个值
//};
//void test01() {
//	Person p;
//	p.showPerson();
//}
////常对象
//void test02() {
//	const Person p;//常对象
//	//p.age = 100;
//	p.m_age = 100;//可修改
//	//常对象只能调用常函数
//	p.showPerson();
//	//p.func();
//}
//int main() {
//	test02();
//}