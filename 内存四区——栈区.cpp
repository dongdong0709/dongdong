//#include<iostream>
//using namespace std;
//int* fun(int b) {//形参数据也会放在栈区
//	b = 100;
//	int a = 10;//局部变量，存放在栈区，栈区的数据在函数执行完成后自动释放
//	return &a;//返回局部变量的地址
//}
//int main() {
//	//接收fun函数的返回值
//	int* p = fun(1);
//	cout << *p << endl;//第一次可以打印正确的数字，因为编译器可以保留
//
//	//不要返回局部变量的地址，栈区开辟的数据会由编译器自动释放 
//
//	cout << *p << endl;//第二次这个数据就不再保留了 
//}