#include<iostream>
#include<string>
using namespace std;

int main()
{
	int num = 1;
	while (num < 6) {
		string Mul(num, '*');
		num++;
		cout << Mul << endl;
	}

	return 0;
}