//#include<iostream>
//using namespace std;
////1.��Ҫ���ؾֲ�����������
//int& test01() {
//	int a = 10;	//�ֲ���������������ջ���������꼴��ϵͳ�Զ��ͷ�
//	return a;
//}
////2.�����ĵ��ÿ�����Ϊ��ֵ
//int& test02() {
//	static int a = 10;	//��̬����������ȫ������ȫ�����������ڳ����������ϵͳ�ͷ�
//	return a;
//}
//int  main() {
//	//int& ret = test01();
//	//cout << "ret=" << ret << endl;	//��һ�ν����ȷ����Ϊ���������˽������
//	//cout << "ret=" << ret << endl;	//�ڶ��ν��������Ϊa���ڴ��ѱ��ͷ�
//	int& ret1 = test02();
//	cout << "ret1=" << ret1 << endl;
//	cout << "ret1=" << ret1 << endl;
//
//	//�������ÿ�����Ϊ��ֵ������������ķ���ֵ������
//	test02() = 1000;
//	cout << "ret1=" << ret1 << endl;
//	cout << "ret1=" << ret1 << endl;
//
//}