////���������������������ֱ��ó�Ա������ȫ�ֺ����ж������������Ƿ����
//#include<iostream>
//using namespace std;
//class Cube {
//public:
//	//��Ϊ
//	//����������ĳ�
//	int setC(int a) {
//		m_L = a;
//		return m_L;
//	}
//	//����������Ŀ�
//	int setK(int b) {
//		m_W = b;
//		return m_W;
//	}
//	//����������ĸ�
//	int setG(int c) {
//		m_H = c;
//		return m_H;
//	}
//	//��ȡ������ĳ�
//	int getC() {
//		return m_L;
//	}
//	//��ȡ������Ŀ�
//	int getK() {
//		return m_W;
//	}
//	//��ȡ������ĸ�
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
//			cout << "��Ա�����ж��������������" << endl;
//		}
//		else {
//			cout << "��Ա�����ж����������岻���" << endl;
//		}
//	}
//private:
//	//����
//	int m_L;
//	int m_W;
//	int m_H;
//};
////����ȫ�ֺ����ж������������Ƿ����
//void func1(Cube &cu1,Cube &cu2) {
//	if (cu1.getC() == cu2.getC() && cu1.getK() == cu2.getK() && cu1.getG() == cu2.getG()) {
//		cout << "ȫ�ֺ����ж��������������" << endl;
//	}
//	else {
//		cout << "ȫ�ֺ����ж����������岻���" << endl;
//	}
//}
//int main() {
//	Cube cu;
//	Cube cu1;
//	Cube cu2;
//	cu1.setC(3);
//	cu1.setK(4);
//	cu1.setG(5);
//	cout << "������1�������" << cu1.mianji(cu1.getC(), cu1.getK(), cu1.getG()) << endl;
//	cout << "������1�������" << cu1.tiji(cu1.getC(), cu1.getK(), cu1.getG()) << endl;
//	cu2.setC(1);
//	cu2.setK(2);
//	cu2.setG(3);
//	cout << "������2�������" << cu2.mianji(cu2.getC(), cu2.getK(), cu2.getG()) << endl;
//	cout << "������2�������" << cu2.tiji(cu2.getC(), cu2.getK(), cu2.getG()) << endl;
//	cu1.func(cu2);//��Ա����
//	func1(cu1, cu2);//ȫ�ֺ���
//}
