////ÿ����ʦ����5��ѧ�����ܹ���3����ʦ�����ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա��ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ���մ�ӡ����ʦ�����Լ���ʦ����ѧ��������
//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
//struct Student {
//	string sname;
//	int score;
//};
//struct Teacher {
//	string tname;
//	struct Student s[5] ;
//};
////����ʦ��ѧ����ֵ�ĺ���
//void allocate(struct Teacher t[],int len) {//����������һ������
//	string nameseed = "ABCDE";
//	//����ʦ��ʼ��ֵ
//	for (int i = 0; i < len; i++) {
//		t[i].tname = "Teacher_";
//		t[i].tname += nameseed[i];
//		//ͨ��ѭ����ÿ����ʦ������ѧ�����и�ֵ
//		for (int j = 0; j < 5; j++) {
//			t[i].s[j].sname = "Student_";
//			t[i].s[j].sname += nameseed[j];
//
//			//�����
//			int random = rand() % 61 + 40;//0~60�������
//			t[i].s[j].score = random;
//		}
//	}
//}
//void print(struct Teacher t[],int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "��ʦ�����ƣ�" << t[i].tname << endl;
//		for (int j = 0; j < 5; j++) {
//			cout <<"\tѧ��" << t[i].s[j].sname <<" "<<"�ɼ�"<< t[i].s[j].score << endl;
//		}
//	}
//}
//
//int main() {
//	//���������
//	srand((unsigned int)time(NULL));
//	struct Teacher t[3] ;
//	int len = sizeof(t) / sizeof(t[0]);
//	allocate(t,len);
//	print(t,len);
//}