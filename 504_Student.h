#pragma once
#include<iostream>
using namespace std;

class Stu {						//定义学生类
private:						//定义私有成员属性
	int stu[5][2];

public:							//定义公有成员函数
	void getdata();				//输入函数声明
	void max();		//求最高分函数声明，修正参数类型
};