//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//构造函数的分类：按照参数分类	无参构造（默认构造函数）和有参构造
//	//				  按照类型分类  普通构造和拷贝构造
//	//普通构造函数
//	Person() {
//		cout << "Person的无参构造函数的调用" << endl;
//	}
//	Person(int a) {
//		age = a;
//		cout << "Person的有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p) {
//		//将传入的人身上的所有属性拷贝到我的身上
//		age = p.age;
//		cout << "Person的拷贝构造函数的调用" << endl;
//	}
//	~Person() {
//		cout << "Person析构函数的调用" << endl;
//	}
//	int age;
//};
////调用
//void test01() {
//	////1.括号法
//	//Person p1;//默认构造函数的调用
//	//Person p2(10);//调用 有参构造函数
//	//Person p3(p2);//调用 拷贝构造函数
//
//	////注意事项
//	////调用默认 构造函数的时候，不要加上（）
//	////Person p1();编译器会认为是函数的声明，不会认为是在创建对象——如void func();
//	//cout << "p2的年龄：" << p2.age << endl;
//	//cout << "p3的年龄：" << p3.age << endl;
//	//2.显示法
//	//Person p1;
//	//Person p2 = Person(10);//有参构造
//	//Person p3 = Person(p2);//拷贝构造
//
//	//Person(10);//叫匿名对象——放在等式右边叫给它起个名叫 p2
//	////特点——当前行执行完毕后，系统会立即回收掉匿名对象
//	//cout << "aaaaaa" << endl;
//
//	////注意事项
//	////不要利用拷贝构造函数进行 初始化匿名对象
//	// Person(p3);//编译器会认为Person(p3)====Person p3;对象声明 从而误认为是重定义了
//
//	//3.隐式转换法
//	 Person p4 = 10;//相当于Person p4=Person(10);有参构造调用
//	 Person p5 = p4;//拷贝构造
//
//}
//int main() {
//	test01();	//细品：最后卸磨杀驴——无参、有参、拷贝 最后再析构、析构、析构
//	system("pause");
//}