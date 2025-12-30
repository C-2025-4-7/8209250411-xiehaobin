#include<iostream>
#include<vector>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	for(int i = 0;i < size2;i++) {
		list3[size1 + i] = list2[i];
	}
}

int main() {
	const int list1[] = { 5,1,5,16,61},
		list2[] = { 4,2,4 };
	 const int size1 = sizeof(list1) / sizeof(list1[0]),
		 size2 = sizeof(list2) / sizeof(list2[0]);

	 cout << "Enter list1:";
	 for (int i = 0; i < size1; i++) {
		 cout << list1[i] << " ";
	 }cout << endl;
		 cout << "Enter list2:" ;
	 for (int i = 0; i < size2; i++) {
		 cout << list2[i] << " ";
	 }cout << endl;

	 int list3[size1 + size2];
	 merge(list1, size1, list2, size2, list3);
		 cout << "The merged list is:" ;
	 for (int i = 0; i < size1 + size2; i++) {
		 cout << list3[i] << ' ';
	 }

	return 0;
}