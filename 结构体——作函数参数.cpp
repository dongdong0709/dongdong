//#include<iostream>
//#include<string>
//using namespace std;
//struct Student {	//1.����ṹ��
//	string name;
//	int age;
//	int score;
//};
//
////��ӡѧ����Ϣ����
////1.ֵ����
//void print1(struct Student s) {
//	s.name = "����";
//	s.age = 19;
//	s.score = 98;
//	cout << "�Ӻ���1��ѧ��������" << s.name << "ѧ�����䣺" << s.age << "ѧ���ɼ���" << s.score << endl;
//}
////2.��ַ����
//void print2(struct Student*p) {
//	p->age = 20;
//	cout << "�Ӻ���2��ѧ��������" << p->name << "ѧ�����䣺" << p->age << "ѧ���ɼ���" << p->score << endl;
//}
//int main() {
//	//�ṹ������������
//	//��ѧ�����뵽һ�������У���ӡѧ������������Ϣ
//	
//	//�����ṹ�����
//	struct Student s;
//	s.name = "����";
//	s.age = 18;
//	s.score = 100;
//	print1(s);
//	print2(&s);
//	cout << "��������ѧ��������" << s.name << "ѧ�����䣺" << s.age << "ѧ���ɼ���" << s.score << endl;
//}