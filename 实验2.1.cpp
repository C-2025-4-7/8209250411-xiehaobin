#include<iostream>
using namespace std;

int main()
{
	cout << "请输入一个字母：";
	char word;
	cin >> word;

	if ('a' <= word && word <= 'z') {
		word -= 32;
		cout << "该字符的大写形式为：" << word << endl;
	}
	else if ('A' <= word && word <= 'Z') {
		int ASCIIvalue = word;
		cout << "该字符的ASCII值为：" << ASCIIvalue << endl;
	}
	else {
		cout << "输入的字符有误。" << endl;
	}


	return 0;
}