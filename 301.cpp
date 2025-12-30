#include<iostream>
using namespace std;

int gcd(int a, int b) {//#include<numeric>中gcd函数的简单实现
	int min;
	a < b ?  min = a :  min = b;
	for (int i = min; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
}

int main() {
	int a, b;
	cout << "请输入两个正整数：\n";
	cin >> a >> b;
	int GCD = gcd(a, b);
	cout << "这两个正整数的最大公约数为：" << GCD << endl;

	return 0;
}