#include "pch.h"
#include "Auto.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main(int argc, char*argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Auto machine;
	cout << "\rMark: ";
	cout << machine.getMark();
	cout << "\r\nModel: ";
	cout<< machine.getModel();
	cout << "\nYear: " << machine.getYear();
	cout << "\n\nPrice: " << machine.getPrice();
	cout << "\n\nFuel consumption: " << machine.getOil();
	cout << "\n\nСapacity: " << machine.getPower();
	cout << "\n\nMax speed: " << machine.getMax();
	cout << "\n\nTime to get to 100 km/h: " << machine.getTime();
	cout << "\n==========================" << endl;

	string lol;
	cout << "\nenter info about your car\nenter mark: ";
	cin >> lol;
	machine.setMark(lol);
	cout << "\nenter model: ";
	cin >> lol;
	machine.setModel(lol);
	int olo;
	cout << "\nenter year: ";
	cin >> olo;
	machine.setYear(olo);
	cout << "\nenter price: ";
	cin >> olo;
	machine.setPrice(olo);
	cout << "\nenter fuel consumption: ";
	cin >> olo;
	machine.setOil(olo);
	cout << "\nenter capacity: ";
	cin >> olo;
	machine.setPower(olo);
	cout << "\nenter max speed: ";
	cin >> olo;
	machine.setMax(olo);
	cout << "\nenter time to get to 100 km/h: ";
	cin >> olo;
	machine.setTime(olo);
	cout << "\n=============================";
	cout << "\n\nMark: ";
	cout << machine.getMark();
	cout << "\n\nModel: ";
	cout << machine.getModel();
	cout << "\n\nYear: " << machine.getYear();
	cout << "\n\nPrice: " << machine.getPrice();
	cout << "\n\nFuel consumption: " << machine.getOil();
	cout << "\n\nСapacity: " << machine.getPower();
	cout << "\n\nMax speed: " << machine.getMax();
	cout << "\n\nTime to get to 100 km/h: " << machine.getTime();
	cout << "\n==========================" << endl;
	system("pause");
	return 0;
}