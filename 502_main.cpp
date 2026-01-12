#include <iostream>             
#include "502_student.h"			//将类声明头文件包含进来
using namespace std;
int main()
{
	Student stud;                //定义对象
	stud.set_value(7, "tcg", 'm');		//设置stud对象的数据成员值
	stud.display();              //执行stud对象的display函数
	return 0;
}
