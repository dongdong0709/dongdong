//#include<iostream>
//#include<string>
//using namespace std;
////全局函数作友元
////家类
//class Buliding {
//	friend void goodGay(Buliding* buliding);
//public:
//	Buliding() {
//		keting = "客厅";
//		badroom = "卧室";
//	}
//	string keting;//客厅
//private:
//	string badroom;//卧室
//};
////全局函数
//void goodGay(Buliding *buliding) {
//	cout << "好基友正在访问" << buliding->badroom << endl;
//	cout << "好基友正在访问" << buliding->keting << endl;
//}
//void test01() {
//	Buliding buliding;
//	goodGay(&buliding);
//}
//int main() {
//	test01();
//}