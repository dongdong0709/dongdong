//#include<iostream>
//#include<string>
//using namespace std;
//struct Student {	//1.定义结构体
//	string name;
//	int age;
//	int score;
//};
//
////打印学生信息函数
////1.值传递
//void print1(struct Student s) {
//	s.name = "赵四";
//	s.age = 19;
//	s.score = 98;
//	cout << "子函数1中学生姓名：" << s.name << "学生年龄：" << s.age << "学生成绩：" << s.score << endl;
//}
////2.地址传递
//void print2(struct Student*p) {
//	p->age = 20;
//	cout << "子函数2中学生姓名：" << p->name << "学生年龄：" << p->age << "学生成绩：" << p->score << endl;
//}
//int main() {
//	//结构体作函数参数
//	//将学生传入到一个参数中，打印学生身上所有信息
//	
//	//创建结构体变量
//	struct Student s;
//	s.name = "张三";
//	s.age = 18;
//	s.score = 100;
//	print1(s);
//	print2(&s);
//	cout << "主函数中学生姓名：" << s.name << "学生年龄：" << s.age << "学生成绩：" << s.score << endl;
//}