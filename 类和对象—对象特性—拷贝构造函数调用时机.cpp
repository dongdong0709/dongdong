//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "Person默认构造函数的调用" << endl;
//	}
//	Person(int a) {
//		age = a;
//		cout << "Person有参函数的调用" << endl;
//	}
//	Person(const Person& p) {
//		age = p.age;
//		cout << "Person拷贝构造函数的调用" << endl;
//	}
//	~Person() {
//		cout << "Person析构函数的调用" << endl;
//	}
//	int age;
//};
////使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//	Person p1(10);
//	Person p2(p1);//拷贝构造函数
//	cout << "p2的年龄为：" << p2.age << endl;
//}
////值传递的方式给函数参数传值
//void dowork(Person p) {
//
//}
//void test02() {
//	Person p;
//	dowork(p);//——等价于拷贝构造函数
//}
//
////以值方式返回局部对象
//Person dowork2() {
//	Person p1;
//	cout << "p1的地址为：" << (int*)&p1 << endl;
//	return p1;
//}
//void test03() {
//	Person p = dowork2();
//	cout << "p的地址为：" << (int*)&p << endl;
//}
//int main() {
//	/*test01();*/
//	/*test02();*/
//	test03();
//	system("pause");
//
//}