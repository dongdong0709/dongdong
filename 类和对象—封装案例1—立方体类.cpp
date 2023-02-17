////求出立方体的面积和体积，分别用成员函数和全局函数判断两个立方体是否相等
//#include<iostream>
//using namespace std;
//class Cube {
//public:
//	//行为
//	//设置立方体的长
//	int setC(int a) {
//		m_L = a;
//		return m_L;
//	}
//	//设置立方体的宽
//	int setK(int b) {
//		m_W = b;
//		return m_W;
//	}
//	//设置立方体的高
//	int setG(int c) {
//		m_H = c;
//		return m_H;
//	}
//	//获取立方体的长
//	int getC() {
//		return m_L;
//	}
//	//获取立方体的宽
//	int getK() {
//		return m_W;
//	}
//	//获取立方体的高
//	int getG() {
//		return m_H;
//	}
//	int mianji(int a,int b,int c) {
//		return 2 * (a * b + a * c + b * c);
//	}
//	int tiji(int a, int b, int c) {
//		return a * b * c;
//	}
//	void func(Cube& c) {
//		if (m_L == c.getC() && m_W == c.getK() && m_H == c.getG()) {
//			cout << "成员函数判断两个立方体相等" << endl;
//		}
//		else {
//			cout << "成员函数判断两个立方体不相等" << endl;
//		}
//	}
//private:
//	//属性
//	int m_L;
//	int m_W;
//	int m_H;
//};
////利用全局函数判断两个立方体是否相等
//void func1(Cube &cu1,Cube &cu2) {
//	if (cu1.getC() == cu2.getC() && cu1.getK() == cu2.getK() && cu1.getG() == cu2.getG()) {
//		cout << "全局函数判断两个立方体相等" << endl;
//	}
//	else {
//		cout << "全局函数判断两个立方体不相等" << endl;
//	}
//}
//int main() {
//	Cube cu;
//	Cube cu1;
//	Cube cu2;
//	cu1.setC(3);
//	cu1.setK(4);
//	cu1.setG(5);
//	cout << "立方体1的面积：" << cu1.mianji(cu1.getC(), cu1.getK(), cu1.getG()) << endl;
//	cout << "立方体1的体积：" << cu1.tiji(cu1.getC(), cu1.getK(), cu1.getG()) << endl;
//	cu2.setC(1);
//	cu2.setK(2);
//	cu2.setG(3);
//	cout << "立方体2的面积：" << cu2.mianji(cu2.getC(), cu2.getK(), cu2.getG()) << endl;
//	cout << "立方体2的体积：" << cu2.tiji(cu2.getC(), cu2.getK(), cu2.getG()) << endl;
//	cu1.func(cu2);//成员函数
//	func1(cu1, cu2);//全局函数
//}
