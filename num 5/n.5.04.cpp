#include "pch.h"
#include <iostream>
using namespace std;

int sum(int a, int b) {
	return a + b;
}
double sum(double a, double b) {
	return a + b;
}

int diff(int a, int b) {
	return a - b;
}
double diff(double a, double b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}
double mul(double a, double b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}
double divide(double a, double b) {
	return a / b;
}

int main()
{
	int a, b;
	double c, d;
	cout << "enter your numbers (integer): ";
	cin >> a >> b;
	cout << "sum: " << sum(a, b) << "\ndiff: " << diff(a, b) << "\nmul: " << mul(a, b) << "\ndivide: " << divide(a, b);
	cout << "\nenter your numbers (real): ";
	cin >> c >> d;
	cout << "sum: " << sum(c, d) << "\ndiff: " << diff(c, d) << "\nmul: " << mul(c, d) << "\ndivide: " << divide(c, d);
}

