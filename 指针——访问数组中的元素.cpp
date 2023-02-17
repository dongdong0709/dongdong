//#include<iostream>
//using namespace std;
//int main() {
//	//利用指针访问数组中的元素
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//指针指向数组的地址——数组名就是数组的首地址
//	cout << "利用指针访问数组中的第一个元素是：" << *p << endl;
//
//	//++p;指针向后偏移4个字节
//	cout << "利用指针访问数组中的第二个元素是：" << *(p + 1) << endl;
//
//	//利用指针遍历整个数组
//	int* p1 = arr;
//	for (int i = 0; i < 10; i++) {
//		cout << *(p1 + i) << endl;
//	}
//}