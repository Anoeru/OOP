#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string s;
	ifstream fin("D:\\var1.txt");
	while (!fin.eof()) {
		fin >> s;
		cout << s << endl;
	}
}