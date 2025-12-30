#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int indexof(const char* s1, const char* s2) {
	if (s1 == nullptr || s1[0] == '\0') {
		return 0;
	}
	if (s2 == nullptr || strlen(s1) > strlen(s2)) {
		return -1;
	}
	for (int i = 0; i < strlen(s2) - strlen(s1); i++) {
		int k = 0;
		while (k < strlen(s1) && s2[i + k] == s1[k]) {
			k++;
		}
		if (k == strlen(s1)) {
			return i;
		}
	}
	return -1;
}

int main() {
	string string1, string2;
	getline(cin, string1);
	getline(cin, string2);
	char* s1 = new char[string1.length() + 1],
		* s2 = new char[string2.length() + 1];
	strcpy_s(s1, string1.length() + 1, string1.c_str());
	s1[string1.length()] = '\0';
	strcpy_s(s2, string2.length() + 1, string2.c_str());
	s2[string2.length()] = '\0';
	
	cout << "Enter the first string:";
	for (int i = 0; i < strlen(s1); i++)
		cout << s1[i];
	cout << endl;
	cout << "Enter the second string:";
	for (int i = 0; i < strlen(s2); i++)
		cout << s2[i];
	cout << endl;
	cout << "indexOf(s1,s2):" << indexof(s1, s2) << endl;

	delete[] s1,s2;
	s1 = nullptr, s2 = nullptr;

	return 0;
}