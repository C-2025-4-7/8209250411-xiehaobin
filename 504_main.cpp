#include<iostream>
#include"504_Student.h"			//引进类头文件
using namespace std;

int main() {
	int stu[5][2];			//定义二维数组存放学生学号和成绩
	Stu student;			//定义学生对象
	student.getdata();		//分别输入学生成绩和学号
	student.max();			//输出最高分学生学号

	return 0;
}
