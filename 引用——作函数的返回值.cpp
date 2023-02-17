//#include<iostream>
//using namespace std;
////1.不要返回局部变量的引用
//int& test01() {
//	int a = 10;	//局部变量放在四区的栈区——用完即被系统自动释放
//	return a;
//}
////2.函数的调用可以作为左值
//int& test02() {
//	static int a = 10;	//静态变量，放在全局区，全局区的数据在程序结束后由系统释放
//	return a;
//}
//int  main() {
//	//int& ret = test01();
//	//cout << "ret=" << ret << endl;	//第一次结果正确，因为编译器做了结果保留
//	//cout << "ret=" << ret << endl;	//第二次结果错误，因为a的内存已被释放
//	int& ret1 = test02();
//	cout << "ret1=" << ret1 << endl;
//	cout << "ret1=" << ret1 << endl;
//
//	//函数调用可以作为左值——如果函数的返回值是引用
//	test02() = 1000;
//	cout << "ret1=" << ret1 << endl;
//	cout << "ret1=" << ret1 << endl;
//
//}