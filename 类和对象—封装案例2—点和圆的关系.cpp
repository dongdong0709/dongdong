////���һ��Բ����Cricle����һ������Point��������Բ�Ĺ�ϵ��������Բ����࣬�Ϻ��ڲ�
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
////	//����
////	int x;
////	int y;
////};
////�㵽Բ�ĵľ�����뾶�Ĵ�С�Ƚ�
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
////			cout << "����Բ��" << endl;
////		}
////		else if (distance == sqrt(c.getr())) {
////			cout << "����Բ��" << endl;
////		}
////		else {
////			cout << "����Բ��" << endl;
////		}
////	}
////private:
////	int m_r;//�뾶
////	Point m_center;//Բ�ġ��������У���������һ������Ϊ�����еĳ�Ա
////	
////};
//
//void func(Circle & c, Point & p) {
//	int distance = (c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
//		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
//	int dis_r = c.getr()*c.getr();
//	if (distance > dis_r) {
//		cout << "����Բ��" << endl;
//	}
//	else if (distance == dis_r) {
//		cout << "����Բ��" << endl;
//	}
//	else {
//		cout << "����Բ��" << endl;
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