//#include<iostream>
//using namespace std;
//void showval(const int& val) {	//加上const后防止形参改变实参，防止误操作，就只是单纯的打印
//	//val = 10;——会报错
//	cout << "val=" << val << endl;
//}
//int main() {
//	////const引用的语法——加上const后，编译器将代码修改为int temp;const int& ref=temp;
//	//const int& ref = 10;
//	////单纯的写int& ref=10;会报错，引用必须引一个合法的内存空间
//	////ref=20;	会报错——加入const后只可读，不可修改
//
//	////使用场景：用来修饰形参，防止误操作
//	int a = 100;
//	showval(a);
//	cout << "a=" << a << endl;
//}