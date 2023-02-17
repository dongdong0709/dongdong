//#include<iostream>
//using namespace std;
////函数重载——函数名可以相同，提高函数的复用性
//
////函数重载满足的条件
////1.同一个作用域下
////2.函数名称相同
////3.函数参数类型不同 / 个数不同 / 顺序不同
//void func() {
//	cout << "this is func()的调用" << endl;
//}
//void func(int a) {
//	cout << "this is func(int a)的调用" << endl;
//}
//void func(double a) {
//	cout << "this is func(double a)的调用" << endl;
//}
////函数的返回值不可以作为函数重载的条件
////int func(double a) {
////	cout << "this is func(double a)的调用" << endl;
////}	
//int main() {
//	func();
//	func(10);
//	func(3.14);
//}