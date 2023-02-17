//#include<iostream>
//using namespace std;
//int main() {
//	//1.指针的定义
//	int a = 10;
//	int* p;//指针定义的语法 数据类型 * 指针变量名；
//	//让指针记录变量的地址
//	p = &a;
//	cout << "a的地址为：" << &a << endl;
//	cout << "指针p为：" << p << endl;
//
//	//2.使用指针
//	//可以通过解引用的方法来找指针所指向的内存
//	*p = 100;//指针前加*代表解引用，找到指针指向的内存中的数据
//	cout << "a=" << a << endl;
//	cout << "*p=" << *p << endl;
//}