////一个英雄的结构体，包括成员姓名、年龄、性别；创建结构体数组，数组中存放5名英雄。通过冒泡排序算法，将数组中的英雄按照年龄进行升序，最终打印排序后的结果
//#include<iostream>
//using namespace std;
//#include<string>
//struct Hero {
//	string name;
//	int age;
//	string sex;
//};
//void BubbleSort(struct Hero h[],int len) {
//	for (int i = 0; i < len; i++) {
//		for (int  j = 0; j < len - i - 1; j++) {
//			if (h[j].age > h[j + 1].age) {
//				struct Hero temp = h[j];
//				h[j] = h[j + 1];
//				h[j + 1] = temp;
//			}
//		}
//	}
//}
//void print(struct Hero h[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << h[i].name << " " << h[i].age << " " << h[i].sex << endl;
//	}
//}
//int main() {
//	struct Hero h[5] = {
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"}
//	};
//	int len = sizeof(h) / sizeof(h[0]);
//	BubbleSort(h,len);
//	print(h, len);
//}