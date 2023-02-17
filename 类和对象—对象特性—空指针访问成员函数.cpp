//#include<iostream>
//using namespace std;
////空指针调用成员函数 
//class Person {
//public:
//	void showAge() {
//		//报错的原因是传入的指针为空
//		/*cout << "age=" << age << endl;*/
//		
//		//提高代码的健壮性
//		if (this == NULL) {
//			return;
//		}
//		cout << "age=" << age << endl;	//不会报错
//	}
//	void showName() {
//		cout << "this is Person class" << endl;
//	}
//	int age;
//};
//void test01() {
//	Person* p=NULL;
//	p->showName();
//	p->showAge();
//	
//}
//int main() {
//	test01();
//}