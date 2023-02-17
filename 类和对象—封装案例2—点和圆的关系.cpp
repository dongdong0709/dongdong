////设计一个圆形类Cricle，和一个点类Point，计算点和圆的关系——点在圆的外侧，上和内测
//#include<iostream>
//using namespace std;
//#include"Point.h"
//#include"Circle.h"
////class Point {
////public:
////	int setx(int a) {
////		x = a;
////		return x;
////	}
////	int sety(int b) {
////		y = b;
////		return y;
////	}
////	int getx() {
////		return x;
////	}
////	int gety() {
////		return y;
////	}
////private:
////	//坐标
////	int x;
////	int y;
////};
////点到圆心的距离与半径的大小比较
////class Circle {
////public:
////	void setcenter(Point &p) {
////		m_center = p;
////	}
////	Point getcenter(){
////		return m_center;
////	}
////	int setr(int a) {
////		m_r = a;
////		return m_r;
////	}
////	int getr() {
////		return m_r;
////	}
////	void func1(Circle& c, Point& p) {
////		int distance = (c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
////			(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
////		if (distance > sqrt(c.getr())) {
////			cout << "点在圆外" << endl;
////		}
////		else if (distance == sqrt(c.getr())) {
////			cout << "点在圆上" << endl;
////		}
////		else {
////			cout << "点在圆内" << endl;
////		}
////	}
////private:
////	int m_r;//半径
////	Point m_center;//圆心——在类中，可以让另一个类作为本类中的成员
////	
////};
//
//void func(Circle & c, Point & p) {
//	int distance = (c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
//		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
//	int dis_r = c.getr()*c.getr();
//	if (distance > dis_r) {
//		cout << "点在圆外" << endl;
//	}
//	else if (distance == dis_r) {
//		cout << "点在圆上" << endl;
//	}
//	else {
//		cout << "点在圆内" << endl;
//	}
//}
//int main() {
//	Circle c;
//	Point p;
//	Point p1;
//	c.setcenter(p);
//	p.setx(10);
//	p.sety(10);
//	c.setr(10);
//	p1.setx(3);
//	p1.sety(3);
//	func(c,p1);
//	c.func1(c, p1);
//}