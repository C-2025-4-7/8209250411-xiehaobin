#include<iostream>
using namespace std;

int main()
{
	cout << "苹果每个0.8元，第一天买两个，第二天开始，每天买前天的两倍，"
		<< "直到购买的苹果数不超过100的最大值，求每天平均花多少钱？" << endl;

	int num = 2,
		sum = 2,
		day = 1;
	float money = 0.8 * num;
	while (sum <= 100) {
		num *= 2;
		sum += num;
		day++;
		if (sum > 100) {
			sum -= num;
			day--;
			break;
		}
	}

	money = (sum * 0.8) / day;
	cout << "平均每天花的钱为：" << money << endl;

	return 0;
}