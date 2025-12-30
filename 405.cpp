#include<iostream>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
	if (s1 == nullptr || s1[0] == '\0') {
		return 0;
	}
	if (s2 == nullptr) {
		return -1;
	}

	int len1 = 0, len2 = 0;
	while (s1[len1] != '\0') {
		len1++;
	}
	while (s2[len2] != '\0') {
		len2++;
	}
	if (len1 > len2) {
		return -1;
	}

	for (int i = 0; i <= len2 - len1 ;i++) {
		int k = 0;
		while (k < len1 && s2[i + k] == s1[k]) {
			k++;
		}
		if (k == len1) {
			return i;
		}
	}
		return -1;
}

int main() {
	const char s1[] = "welcome",
		s2[] = "We welcome you!",
		s3[] = "We invide you!";
		
	int len1 = 0, len2 = 0,len3 = 0;
	while (s1[len1] != '\0') {
		len1++;
	}
	while (s2[len2] != '\0') {
		len2++;
	}
	while (s3[len3] != '\0') {
		len3++;
	}

	cout << "Enter the first string: ";
	for (int i = 0; i < len1; i++) {
		cout << s1[i];
	}cout << endl;
	cout << "Enter the second string: ";
	for (int i = 0; i < len2; i++) {
		cout << s2[i];
	}cout << endl;
	cout << "indexOf(s1,s2): " << indexOf(s1, s2) << endl;
	cout << string(60, '-') << endl;
	cout << "Enter the first string: ";
	for (int i = 0; i < len1; i++) {
		cout << s1[i];
	}cout << endl;
	cout << "Enter the second string: ";
	for (int i = 0; i < len3; i++) {
		cout << s3[i];
	}cout << endl;
	cout << "indexOf(s1,s3): " << indexOf(s1, s3) << endl;

	return 0;
}