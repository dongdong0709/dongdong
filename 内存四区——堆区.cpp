//#include<iostream>
//using namespace std;
//int* fun() {
//	//利用new关键字，可以将内存开辟到堆区
//	
//	//new可以在堆区放数据
//	int* p = new int(10);///堆区返回10这个编号的地址
//	return p;
//}
//int main() {
//	//在堆区开辟数据
//
//	//指针 本质上也就是局部变量，放在栈上，指针保存的数据放在堆区
//	int* p = fun();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//}