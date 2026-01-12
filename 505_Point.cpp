#include"505_Point.h"

void Point::setPoint(int i, int j) {	//定义修改点坐标的函数
	x = 60 + i;
	y = 80 + j;
}

void Point::displayPoint() {		//定义显示点坐标的函数
	cout << "点的坐标为：(" << x << "," << y << ")" << endl;
}