#include "pch.h"
#include <iostream>
using namespace std;

void InsertionSort(int* arr, int sizeArr) {
	for (int i = 1; i < sizeArr; i++) {
		int j = i;
		while (arr[j] < arr[j - 1] && j > 0) {
			int t = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = t;
			j--;
		}
	}
}
void InsertionSort(double* arr, int sizeArr) {
	for (int i = 1; i < sizeArr; i++) {
		int j = i;
		while (arr[j] < arr[j - 1] && j > 0) {
			double t = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = t;
			j--;
		}
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
	InsertionSort(arr, 5);
	cout << "the result is: ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ' ';
	}
	double arr1[6];
	cout << "\nenter your massive: ";
	for (int i = 0; i < 6; i++)
	{
		cin >> arr1[i];
	}
	cout << endl;
	InsertionSort(arr1, 6);
	cout << "the result is: ";
	for (int i = 0; i < 6; i++)
	{
		cout << arr1[i] << ' ';
	}
	system("pause");
	return 0;
}
