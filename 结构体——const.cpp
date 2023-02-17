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
////2.地址传递
//void print2(const struct Student*p) {	//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
//	//p->age = 20;——加上const后，一旦有修改的操作便会报错，防止我们误操作
//	cout << "子函数2中学生姓名：" << p->name << "学生年龄：" << p->age << "学生成绩：" << p->score << endl;
//}
//int main() {
//	struct Student s = { "张三",18,100 };
//	print2(&s);
//	cout << "主函数中学生姓名：" << s.name << "学生年龄：" << s.age << "学生成绩：" << s.score << endl;
//}