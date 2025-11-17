#include<iostream>
using namespace std;

int main()
{
	float a, b;
	cout << "请输入a的值：";
	cin >> a;
	cout << "请输入b的值：";
	cin >> b;

	float y1 = a + b,
		y2 = a - b,
		y3 = a * b,
		y4 = a / b;

	cout << "y1 = a + b 的结果为：" << y1 << endl;
	cout << "y2 = a - b 的结果为：" << y2 << endl;
	cout << "y3 = a * b 的结果为：" << y3 << endl;

	if (b != 0) {
		cout << "y4 = a / b 的结果为：" << y4 << endl;
	}
	else {
		cout << "y4 = a / b 的结果不存在！" << endl;
	}

	int c, d;
	cout << "请输入c的值：";
	cin >> c;
	cout << "请输入d的值：";
	cin >> d;

	int r = c % d;
	cout << "c对d取余的结果为：" << r << endl;

	return 0;
}