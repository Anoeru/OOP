#include "pch.h"
#include <iostream>
using namespace std;

void BubbleSort(int* arr, int sizeArr) {
	for (int i = 0; i < sizeArr - 1; i++)
		for (int j = i + 1; j < sizeArr; j++)
			if (arr[i] > arr[j]) {
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
}
void BubbleSort(double* arr, int sizeArr) {
	for (int i = 0; i < sizeArr - 1; i++)
		for (int j = i + 1; j < sizeArr; j++)
			if (arr[i] > arr[j]) {
				double t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
}

int main()
{
	int arr[5];
	cout << "enter your massive: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	BubbleSort(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i]<<' ';
	}
	double arr1[6];
	cout << "\nenter your massive: ";
	for (int i = 0; i < 6; i++)
	{
		cin >> arr1[i];
	}
	cout << endl;
	BubbleSort(arr1, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i]<<' ';
	}
	system("pause");
	return 0;
}

