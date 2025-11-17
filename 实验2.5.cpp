#include<iostream>
#include<string>
using namespace std;

int main()
{
	string word;
	cout << "请输入一串字符：";
	getline(cin, word);

	int letter = 0,
		space = 0,
		num = 0,
		others = 0;

	for (char c : word) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			letter++;
		}
		else if (c == ' ') {
			space++;
		}
		else if (c <= '9' && c >= '0') {
			num++;
		}
		else {
			others++;
		}
	}

	cout << "该字符串中字母的数目为：" << letter << endl;
	cout << "该字符串中空格的数目为：" << space << endl;
	cout << "该字符串中数字的数目为：" << num << endl;
	cout << "该字符串中其他字符的数目为：" << others << endl;

	return 0;
}