#include<iostream>
using namespace std;

////全局变量
//int g_a = 10;
//int g_b = 20;
//
////const修饰的全局变量
//const int c_g_a = 10;
//const int c_g_b = 20;
//int main() {
//	//全局区——全局变量、静态变量、常量
//	// 
//	//1.创建普通的局部变量——创建在普通的函数以内的
//	int a = 10;
//	int b = 20;
//	cout << "局部变量a的地址是" << (int)&a << endl;
//	cout << "局部变量b的地址是" << (int)&b << endl;
//
//	cout << "全局变量g_a的地址是" << (int)&g_a << endl;
//	cout << "全局变量g_b的地址是" << (int)&g_b << endl;
//
//	//2.创建静态变量
//	static int s_a = 10;
//	static int s_b = 20;
//	cout << "静态变量s_a的地址是" << (int)&s_a << endl;
//	cout << "静态变量s_b的地址是" << (int)&s_b << endl;
//
//	//常量——字符串常量和const修饰的常量
//	//字符串常量
//	cout << "字符串常量的地址为：" << (int)&"Hello World" << endl;
//	//const修饰的常量——const修饰的全局常量和const修饰的局部常量
//
//	//const修饰的全局常量 global
//	cout << "全局常量c_g_a的地址是" << (int)&c_g_a << endl;
//	cout << "全局常量c_g_b的地址是" << (int)&c_g_b << endl;
//
//	//const修饰的局部常量 local
//	const int c_l_a = 10;
//	const int c_l_b = 20;
//	cout << "局部常量c_l_a的地址是" << (int)&c_l_a << endl;
//	cout << "局部常量c_l_b的地址是" << (int)&c_l_b << endl;
//}
