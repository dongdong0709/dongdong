//#include<iostream>
//using namespace std;
//#include<string>
////���һ������
//class Person {
//public:		//��public�����ýӿڣ�����������ⲿ�Ϳ��Է��ʵ���
//	//������������ȡ����
//	string getName() {
//		return name;
//	}
//	//д����������������
//	void setName(string n) {
//		name = n;
//	}
//	//�����䡪����ȡ����
//	int getAge() {
//		//���д�������д�������ʱ��Ҫע�͵� age = 0;//��ʼ��Ϊ0��
//		return age;
//	}
//	//д���䡪���������䡪����Χ��Ҫ��0~150
//	int setAge(int a) {
//		if (a < 0 || a > 150){
//			age = 0;
//			cout << "�����������" << endl;
//			return age;
//		}
//		age = a;
//	}
//	//����ֻд������������
//	void setLove(string l) {
//		love = l;
//	}
//private:
//	//���������ɶ���д
//	string name;
//	//���䡪��ֻ��
//	int age;
//	//���ˡ���ֻд
//	string love;
//};
//int main() {
//	Person p;
//	p.setName("����");
//	cout<<"����Ϊ��"<<p.getName()<<endl;
//	p.setAge(18);
//	cout << "����Ϊ��" << p.getAge() << endl;
//	p.setLove("����");
//}