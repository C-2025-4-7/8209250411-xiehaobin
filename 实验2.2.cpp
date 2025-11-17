#include<iostream>
using namespace std;

int main()
{
	float x, y;
	cout << "请输入一个自变量的值：";
	cin >> x;

	if (x > 0 && x < 1) {
		y = 3 - 2 * x;
		cout << "y = 3 - 2 * x\n"
			<< "其对应函数值为：" << y << endl;

	}
	else if (x >= 1 && x < 5) {
		y = 2 / (4 * x) + 1;
		cout << "y = 2 / ( 4 * x ) + 1\n"
			<< "其对应函数值为：" << y << endl;
	}
	else if (x >= 5 && x < 10) {
		y = x * x;
		cout << "y = x * x\n"
			<< "其对应函数值为：" << y << endl;

	}
	else {
		cout << "输入的x值没有对应函数值。" << endl;
	}

	return 0;
}
