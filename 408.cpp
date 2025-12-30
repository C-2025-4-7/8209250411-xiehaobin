#include<iostream>
#include<string>
using namespace std;

int parseHex(const char* const hexString) {
	int num1 = 0, num2 = 0, num3 = 0,
		sum1 = 0,sum2 = 0,sum3 = 0;
	for (int i = 0; i < static_cast<int>(strlen(hexString)); i++) {
		if ((hexString[i] >= '0' && hexString[i] <= '9')) {
			num1 = (hexString[i] - '0') * pow(16, (static_cast<int>(strlen(hexString)) - i - 1));
			sum1 += num1;
		}
		else if((hexString[i] >= 'a' && hexString[i] <= 'f')){
			num2 = (hexString[i] - 'a' + 10) * pow(16, (static_cast<int>(strlen(hexString)) - i - 1));
			sum2 += num2;
		}
		else if((hexString[i] >= 'A' && hexString[i] <= 'F')){
			num3 = (hexString[i] - 'A' + 10) * pow(16, (static_cast<int>(strlen(hexString)) - i - 1));
			sum3 += num3;
		}
		else {
			return -1;//-1表示输入错误
		}
	}
	return sum1 + sum2 +sum3;
}

int main() {
	string input;
	int num1 = 0, sum1 = 0;
	cout << "输入十六进制数: ";
	getline(cin, input);
	char* cstr = new char[input.length() + 1];
	strcpy_s(cstr, input.length() + 1, input.c_str());
	cstr[input.length()] = '\0';

	cout << "转化为十进制数为: " << parseHex(cstr) << endl;
	
	return 0;
}