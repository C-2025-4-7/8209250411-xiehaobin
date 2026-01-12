#pragma once
#include<iostream>
using namespace std;

class Cub		//定义一个立方体类
{
private:
	int l;		//定义立方体的长
	int w;		//定义立方体的宽
	int h;		//定义立方体的高

public:
	void setdata(int a, int b, int c);	//定义成员函数设置立方体的长宽高
	void display();						//输出立方体体积
};