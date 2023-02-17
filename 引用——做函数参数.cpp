//#include<iostream>
//using namespace std;
////交换函数
//
//////值传递
////void swap01(int a,int b) {
////	int temp = a;
////	a = b;
////	b = temp;
////	cout << "a=" << a << endl;
////	cout << "b=" << b << endl;
////}
////
//////地址传递
////void swap02(int* p,int* q) {
////	int temp =*p;
////	*p = *q;
////	*q = temp;
////	cout << "*p=" << *p << endl;
////	cout << "*q=" << *q << endl;
////}
////引用传递
//void swap03(int& a, int& b) {	//形参会改变实参
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	swap03(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	/*swap01(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	swap02(&a, &b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;*/
//}