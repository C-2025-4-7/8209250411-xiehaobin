#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void count(const char s[], int counts[]) {
	for (int i = 0; i < strlen(s);i++) {
		if (isalpha(s[i])) {
			counts[tolower(s[i]) - 'a']++;
		}
		}
}

int main() {
	int counts[26] = { 0 };
	char s[100];
	string input;
	getline(cin, input);
	strcpy_s(s, sizeof(s), input.c_str());

	count(s, counts);
	cout << "Enter a string: " << input << endl;  
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0) {
		char ch = 'a' + i;
		cout << ch << ": " << counts[i] << " times " << endl;
		}
	}

	return 0;
}