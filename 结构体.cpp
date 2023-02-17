//#include<iostream>
//#include<string>
//using namespace std;
//struct Student {	//定义结构体变量时struct不可省略
//	string name;
//	int age;
//	int score;
//}s3;//顺便创建结构体变量
//int main() {
//	//通过学生类型创建具体学生
//	struct Student s1;//struct可以省略
//	//给s1属性赋值，通过.来访问结构体变量中的属性
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 100;
//	cout << "姓名：" << s1.name << "年龄：" << s1.age << "成绩：" << s1.score << endl;
//
//	struct Student s2 = {"李四",19,90};//struct可以省略
//	cout << "姓名：" << s2.name << "年龄：" << s2.age << "成绩：" << s2.score << endl;
//
//	//在定义结构体时顺便创建结构体变量----s3
//	s3.name = "王五";
//	s3.age = 20;
//	s3.score = 99;
//	cout << "姓名：" << s3.name << "年龄：" << s3.age << "成绩：" << s3.score << endl;
//}