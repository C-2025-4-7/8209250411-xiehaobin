#pragma once
#include<iostream>
using namespace std;

class Point {				//定义一个点类
private:					//定义私有成员并初始化
	int x = 60;
	int y = 80;

public:						//定义公有成员函数
	void setPoint(int i, int j);	//定义修改点坐标的函数
	void displayPoint();		//定义显示点坐标的函数
};