#include<iostream>
using namespace std;

int main() {
	int n = 0;
	bool arr[100] = { 1 };
	for(int i = 2;i < 100;i++)
		for (int k = i; k < 100; k += i) {
			arr[k] = !arr[k];
		}

	cout << "The open doors are: " << endl;
	for(int i = 0;i < 100;i++){
		if(arr[i]){
			cout << i + 1 << '\t';
			n++;
			if (n % 5 == 0) {
				cout << endl;
			}
		}
}

	return 0;
}