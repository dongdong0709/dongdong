////每名老师带领5个学生，总共有3个老师，设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员，学生的成员有姓名、考试分数，创建数组存放3名教师，通过函数给每个老师及所带的学生赋值最终打印出老师数据以及老师所带学生的数据
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
////给老师和学生赋值的函数
//void allocate(struct Teacher t[],int len) {//传过来的是一个数组
//	string nameseed = "ABCDE";
//	//给老师开始赋值
//	for (int i = 0; i < len; i++) {
//		t[i].tname = "Teacher_";
//		t[i].tname += nameseed[i];
//		//通过循环给每名老师所带的学生进行赋值
//		for (int j = 0; j < 5; j++) {
//			t[i].s[j].sname = "Student_";
//			t[i].s[j].sname += nameseed[j];
//
//			//随机数
//			int random = rand() % 61 + 40;//0~60的随机数
//			t[i].s[j].score = random;
//		}
//	}
//}
//void print(struct Teacher t[],int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "老师的名称：" << t[i].tname << endl;
//		for (int j = 0; j < 5; j++) {
//			cout <<"\t学生" << t[i].s[j].sname <<" "<<"成绩"<< t[i].s[j].score << endl;
//		}
//	}
//}
//
//int main() {
//	//随机数种子
//	srand((unsigned int)time(NULL));
//	struct Teacher t[3] ;
//	int len = sizeof(t) / sizeof(t[0]);
//	allocate(t,len);
//	print(t,len);
//}