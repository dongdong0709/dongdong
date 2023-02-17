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
//		return *this;//返回本体——从而要用引用的方式返回Person &
//	}
//	Person PersonAddAge3(Person& p) {
//		this->age += p.age;
//		return *this;//返回类型是Person,一个值——那么每次返回都将是一个新的对象了
//	}
//	int age;
//};
////1.解决名称冲突
//void test01() {
//	Person p1(18);
//	cout << "p的年龄为：" << p1.age << endl;
//}
////2.返回对象本身用*this
//void test02() {
//	Person p1(10);
//	Person p2(10);
//	Person p3(10);
//	Person p4(10);
//	p2.PersonAddAge1(p1);
//	//链式编程思想
//	p3.PersonAddAge2(p1).PersonAddAge2(p1).PersonAddAge2(p1);
//	p4.PersonAddAge3(p1).PersonAddAge3(p1).PersonAddAge3(p1);
//	cout << "p2的年龄为：" << p2.age << endl;
//	cout << "p3的年龄为：" << p3.age << endl;
//	cout << "p4的年龄为：" << p4.age << endl;
//}
//int main() {
//	//test01();
//	test02();
//}