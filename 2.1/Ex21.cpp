#include "Ex21.h"

void(*message(int* arr, int size))(int* arr, int size)
{
	if (sumArr(arr, size) == arr[0]) {
		return invert;
	}
	if (sumArr(arr, size) > arr[0]) {
		return nonDecreasing;
	}
	if (sumArr(arr, size) < arr[0]) {
		return nonGrowth;
	}
}

void print(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int sumArr(int* arr, int size)
{
	int s = 0;
	for (int i = 0; i < size; i++) {
		s += arr[i];
	}
	return s;
}

void invert(int* arr, int size)
{
	for (int i = size; i > size; i--) {
		cout << arr[i];
	}
}

void nonDecreasing(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] <= arr[j + 1]) {
				int b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
	print(arr, size);
}

void nonGrowth(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] >= arr[j + 1]) {
				int b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
	print(arr, size);
}

