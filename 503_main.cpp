#include<iostream>
#include"503_Cub.h"										//引入类定义头文件
using namespace std;

int main() {
	Cub c1, c2, c3;										//定义三个立方体对象
	int a = 0, b = 0, c = 0;							
	cout << "请输入第一个立方体的长宽高：";				//依次输入三个立方体的长宽高
	c1.setdata(a, b, c);
	cout << "请输入第二个立方体的长宽高：";
	c2.setdata(a, b, c);
	cout << "请输入第三个立方体的长宽高：";
	c3.setdata(a, b, c);
	cout << "第一个立方体的体积为：" ;					//依次输出三个立方体的体积
	c1.display();
	cout << "第二个立方体的体积为：";
	c2.display();
	cout << "第三个立方体的体积为：";
	c3.display();

	return 0;
}