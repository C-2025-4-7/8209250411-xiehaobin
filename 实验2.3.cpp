#include<iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "请输入三角形的三边长:\n";
	cin >> a >> b >> c;

	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		float C = a + b + c;
		if ((a == b) || (a == c) || (b == c)) {
			cout << "该三角形是等腰三角形且周长为：" << C << endl;
		}
		else {
			cout << "该三角形不是等腰三角形且周长为：" << C << endl;
		}
	}
	else {
		cout << "不存在这样的三角形。" << endl;
	}

	return 0;
}