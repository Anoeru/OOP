#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	double a, b, z, t;
	cout << "enter a & b: ";
	cin >> a >> b;
	if (a > b)
		z = sqrt(sin(a*b));
	else
		z = a + log(b + a);
	if (z < b)
		t = tan(a*b) + cos(2 * a*z);
	else
		if (z == b)
			t = (z / (a - b) + (a + b) / (z*z));
		else
			t = z / (a - b);
	cout << "result is:\na = " << a << "\nx = " << b << "\ny = " << z << "\nt = " << t << endl;
	system("pause");
	return 0;
}
