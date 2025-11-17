#include<iostream>
#define a 3.14//a为圆周率
using namespace std;
int main()
{
	float num1, num2, i;
	cout << "请输入圆锥的半径：";
	cin >> num1;
	cout << "请输入圆锥的锥高：";
	cin >> num2;
	 i = num1 * num1;
	 cout << "圆锥的体积为：" << a * i * num2 << endl;



	
	return 0;
}