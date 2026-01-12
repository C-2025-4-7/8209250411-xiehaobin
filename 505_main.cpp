#include<iostream>
#include"505_Point.h"
using namespace std;

int main() {
	Point p;				//创建Point类的对象p
	int a, b;
	cout << "请输入点的坐标增量a和b：";
	cin >> a >> b;			//输入坐标增量
	p.setPoint(a, b);		//调用成员函数修改点坐标
	p.displayPoint();		//调用成员函数显示点坐标
	return 0;
}