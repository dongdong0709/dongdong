#include<iostream>
#include<string>
using namespace std;
//������Ԫ

//����
class Buliding {
	friend class goodGay;
public:
	Buliding();
	string keting;//����
private:
	string badroom;//����
};
class goodGay {
public:
	goodGay();
	void visit();//����Buliding�е�����
	Buliding* buliding;
};
//����д��Ա����
Buliding::Buliding() {//Buliding���������µ�Buliding����
	keting = "����";
	badroom = "����";
}
goodGay::goodGay() {
	//�������������
	buliding = new Buliding;
}
void goodGay::visit() {
	cout << "�û������ڷ���" << buliding->badroom << endl;
	cout << "�û������ڷ���" << buliding->keting << endl;
}
void test01() {
	goodGay gg;
	gg.visit();
}

int main() {
	test01();
}