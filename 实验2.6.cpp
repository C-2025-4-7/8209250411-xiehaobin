#include<iostream>
#include<numeric>
using namespace std;

int main()
{
	cout << "请输入两个正整数：\n";
	int a, b;
	cin >> a >> b;

	int GCD = gcd(a, b);
	int LCM = lcm(a, b);
	cout << "这两个正整数的最大公约数为：" << GCD << endl;
	cout << "这两个正整数的最小公倍数为：" << LCM << endl;


	return 0;
}