//请声明一个五个元素的数组，并且将元素逆置。（如原数组元素为：1，3，2，5，4；逆置后输出结果为4，5，2，3，1）
//#include<iostream>
//using namespace std;
//int main() {
//	int arr[5] = { 1,3,2,5,4 };
//	int temp=0;
//	//int strat=0;//起始元素的下标位置
//	//int end=sizeof(arr)/sizeof(arr[0])-1;//末尾元素的下标位置
//	for (int i = 0; i < 5/ 2; i++) {
//		temp = arr[i];
//		arr[i] = arr[5 - i -1];
//		arr[5 - i -1] = temp;
//	}
//	for (int i = 0; i < 5; i++){
//		cout << arr[i] ;
//	}
//	system("pause");
//}