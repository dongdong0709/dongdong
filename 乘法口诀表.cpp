#include<iostream>
using namespace std;
int main() {
	for (int i = 1; i < 10;i++ ){
		for (int j =1; j <= i; j++) {
			cout << j<<"*"<<i<<"="<<i*j<<"      ";
		}
		cout << endl;/*很重要的换行按钮*/
	}
		
	system("pause");
}
