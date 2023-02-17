//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	Person(int a,int h) {
//		age = a;
//		height = new int(h);	//利用指针去接收这个new的数据
//		cout << "Person的有参构造函数的调用" << endl;
//	}
//	/*Person(const Person& p) {
//		age = p.age;
//		cout << "Person的拷贝构造函数的调用" << endl;
//	}*/
//	//自己实现拷贝构造函数 解决浅拷贝带来的问题
//	Person(const Person& p) {
//		age = p.age;
//		//height = p.height;	浅拷贝 编译器默认实现这行代码
//		//深拷贝操作
//		height = new int(*p.height);
//		cout << "Person的拷贝构造函数的调用" << endl;
//	}
//	~Person() {
//		//析构代码——将堆区开辟的数据进行释放操作
//		if (height != NULL) {
//			delete height;
//			height = NULL;
//		}
//		cout << "Person的析构函数的调用" << endl;
//	}
//	int age;
//	int* height;
//};
//void test01() {
//	Person p1(18,160);
//	cout << "p1的年龄有多大" << p1.age <<"p1的身高为多少："<<*p1.height << endl;
//	Person p2(p1);
//	cout << "p2的年龄有多大" << p2.age <<"p2的身高为多少："<<*p2.height << endl;
//}
//int main() {
//	test01();
//}