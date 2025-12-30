#include<iostream>
#include<vector>
using namespace std;

bool col(vector<int>& arr,int num) {
	int n = static_cast<int>(arr.size());
	for (int i = 0; i < n; i++) {
		if (num == arr[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	int num,n = 1;
	vector<int> arr;
	cin >> num;
	arr.push_back(num);
	for (int i = 0; i < 9; i++) {
				cin >> num;
				for (int k = 0; k < n; k++) {
					if (col(arr,num)) {
						arr.push_back(num);
						n++;
					}
					else continue;
				}
	}
	cout << string(60, '-') << endl;
	cout << "数组中不同的数字有：" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}