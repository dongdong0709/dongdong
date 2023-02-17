////封装一个函数，利用冒泡排序，实现对整型数组的升序排序
//#include<iostream>
//using namespace std;
//void BubbleSort(int* p,int len) {//参数1——数组的首地址；参数2——数组的长度
//	for (int i = 0; i < len; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			if (p[j] > p[j+1]) {
//				int temp = p[j];
//				p[j] = p[j+1];
//				p[j+1] = temp;
//			}
//		}
//	}
//}
//void Print(int*q,int len) {
//	for (int i = 0; i < len; i++) {
//		cout << q[i] << " ";
//	}
//}
//int main() {
//	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr,len);
//	Print(arr, len);
//}