#include<iostream>
#include<iomanip>
using namespace std;

void bubbleSort(double arr[],int n) {
	for(int i = 0; i < n - 1;i++)
		for(int k = i + 1; k < n;k++){
		if(arr[i] > arr[k])
			swap(arr[i], arr[k]);
		}
}

int main() {
	cout << fixed << setprecision(2);
	double arr[10];
	for(int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cout << string(60, '-') << endl;
	bubbleSort(arr,10);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}