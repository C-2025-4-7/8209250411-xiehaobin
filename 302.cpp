#include<iostream>
using namespace std;

bool is_prime(int num) {
	int col = 0;
	for (int i = num - 1; i > 0; i--) {
		if (num % i == 0 && i != 1) {
			col++;
		}
		if (num % i != 0 && i != 1) {
			continue;
	}
		}
	if (col == 0 && num != 1)
		return true;
	else
		return false;
	}
	

int main() {
	int num = 0;
	cout << "1到200之间的素数有：" << endl;
	for (int i = 1; i <= 200; i++) {
				if (is_prime(i)) {
			cout << i << '\t';
			num++;
		if (num % 10 == 0) {
			cout << endl;
		}
		}
	}

	return 0;
}