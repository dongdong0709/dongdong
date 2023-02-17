#include<iostream>
#include<string>
using namespace std;
//类作友元

//家类
class Buliding {
	friend class goodGay;
public:
	Buliding();
	string keting;//客厅
private:
	string badroom;//卧室
};
class goodGay {
public:
	goodGay();
	void visit();//访问Buliding中的属性
	Buliding* buliding;
};
//类外写成员函数
Buliding::Buliding() {//Buliding类作用域下的Buliding函数
	keting = "客厅";
	badroom = "卧室";
}
goodGay::goodGay() {
	//创建建筑物对象
	buliding = new Buliding;
}
void goodGay::visit() {
	cout << "好基友正在访问" << buliding->badroom << endl;
	cout << "好基友正在访问" << buliding->keting << endl;
}
void test01() {
	goodGay gg;
	gg.visit();
}

int main() {
	test01();
}