//#include<iostream>
//using namespace std;
//#include<string>
////设计一个人类
//class Person {
//public:		//在public中设置接口，这样，类的外部就可以访问到了
//	//读姓名——获取姓名
//	string getName() {
//		return name;
//	}
//	//写姓名——设置姓名
//	void setName(string n) {
//		name = n;
//	}
//	//读年龄——获取年龄
//	int getAge() {
//		//此行代码在有写年龄操作时需要注释掉 age = 0;//初始化为0岁
//		return age;
//	}
//	//写年龄——设置年龄——范围需要在0~150
//	int setAge(int a) {
//		if (a < 0 || a > 150){
//			age = 0;
//			cout << "你这个老妖精" << endl;
//			return age;
//		}
//		age = a;
//	}
//	//情人只写——设置情人
//	void setLove(string l) {
//		love = l;
//	}
//private:
//	//姓名——可读可写
//	string name;
//	//年龄——只读
//	int age;
//	//情人——只写
//	string love;
//};
//int main() {
//	Person p;
//	p.setName("张三");
//	cout<<"姓名为："<<p.getName()<<endl;
//	p.setAge(18);
//	cout << "年龄为：" << p.getAge() << endl;
//	p.setLove("李四");
//}