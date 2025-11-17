#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double num1;
	cout << "请输入一个华氏温度：";
	cin >> num1;
	cout << "转换摄氏度为：";
	cout<<fixed<<setprecision(2)<< (num1 - 32) /1.8;
	return 0;

}