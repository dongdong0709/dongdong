//#include<iostream>
//using namespace std;
//void swap01(int a,int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//void swap02(int* p1,int* p2) {
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//	cout << "*p1=" << *p1 << endl;
//	cout << "*p2=" << *p2 << endl;
//}
//int main() {
//	//指针和函数
//	int a = 10;
//	int b = 20;
//	//1.值传递
//	swap01(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	//2.地址传递
//	swap02(&a, &b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;//如果是地址传递，会修饰实参
//}