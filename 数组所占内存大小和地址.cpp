//#include<iostream>
//using namespace std;
//int main() {
//	int arr[3] = { 1,2,3 };
//	cout << sizeof(arr) << endl;//整个数组所占内存空间的大小
//	cout << sizeof(arr[0]) << endl;//每个元素所占内存空间的大小
//	cout << sizeof(arr) / sizeof(arr[0])<<endl;//数组中元素的个数
//	cout << arr << endl;	    //数组首元素的地址---十六进制显示
//	cout << (int)arr << endl;//强制类型转换----十进制显示
//	cout << "数组中第一个元素的地址为" << (int)&arr[0] << endl;
//	//arr[0]是元素，&---取地址符
//	cout << "数组中第二个元素的地址为" << (int)&arr[1] << endl;
//	//数组名是常量，不可以进行赋值操作
//	//arr=10;
//	system("pause");
//}