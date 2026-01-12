#include"503_Cub.h"

void Cub::setdata(int a, int b, int c)			//定义成员函数设置立方体的长宽高
{
	cin >> a >> b >> c;
	l = a;
	w = b;
	h = c;
}
void Cub::display()								//输出立方体体积
{
	cout << l * w * h << endl;
}