#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout << "请输入一个a的值：";
	double a;
	cin >> a;

	double x0 = a;
	double x1 = (x0 + (a / x0)) / 2;
	double eps = std::abs(x1 - x0);

	while (eps > (1e-5)) {
		x0 = x1;
		x1 = (x0 + (a / x0)) / 2;
		eps = std::abs(x1 - x0);
	}

	cout << "a的算术平方根为：" << x1 << endl;

	return 0;
}