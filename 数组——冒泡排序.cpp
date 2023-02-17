//将数组{4，2，8，0，5，7，1，3，9}进行升序排序
//#include<iostream>
//using namespace std;
//int main() {
//	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
//	for(int i=0;i<9-1;i++ ){
//		for (int j = 0; j < 9-i-1; j++) {//9-i-1就是已排好的数无需再排
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int k = 0; k < 9; k++) {
//		cout << arr[k]<<" ";
//	}
//	system("pause");
//}