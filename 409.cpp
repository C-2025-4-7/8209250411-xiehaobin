#include<iostream>
#include<string>
using namespace std;

void bubbleSort(int* arr, int count) {
	for (int i = 0; i < count - 1; i++) {
		for (int k = i + 1; k < count; k++) {
			if (arr[i] > arr[k]) {
				swap(arr[i], arr[k]);
			}
		}
	}
}

int main() {
	int count;
	cout << "请输入要排序的数字个数: ";
	cin >> count;
	int* arr = new int[count];
	cout << "请输入" << count << "个数字: ";
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
	}
	bubbleSort(arr, count);
	for(int i = 0; i < count; i++) {
		cout << arr[i] << " ";
	}
	delete[] arr;

	return 0;
}