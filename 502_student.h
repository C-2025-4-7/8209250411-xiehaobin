#pragma once
#include <iostream>
using namespace std;

class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();		//输出函数原型声明
	void set_value(int n, const char nam[], char s);		//设置值函数原型声明
private:				//私有数据成员声明
	int num;
	char name[20];
	char sex;
};
