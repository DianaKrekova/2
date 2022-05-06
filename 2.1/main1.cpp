#include "Ex21.h"

int main() {
	setlocale(0, "");
	int n;
	cout << "Enter size of array:" << endl;
	cin >> n;
	int* arr = new int[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = 1 + rand() % 100;
	}
	print(arr, n);
	message(arr, n)(arr, n);
	delete[] arr;
	return 0;
}