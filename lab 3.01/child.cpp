#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Child
{
private:
	string name;
	string second_name;
	int age;
public:
	void setname(string n) { this->name = n; }
	void setsecond_name(string n) { this->second_name = n; }
	void setage(const int a) { this->age = a; }
	string getname() { return name; }
	string getsecond_name() { return second_name; }
	int getage() { return age; }
};

int main()
{
	Child boy;
	string s;
	cout << "Enter name: ";
	cin >> s;
	boy.setname(s);
	cout << "Enter second name: ";
	cin >> s;
	boy.setsecond_name(s);
	int i;
	cout << "Enter age: ";
	cin >> i;
	boy.setage(i);

	Child girl;
	cout << "Enter name: ";
	cin >> s;
	girl.setname(s);
	cout << "Enter second name: ";
	cin >> s;
	girl.setsecond_name(s);
	int y;
	cout << "Enter age: ";
	cin >> y;
	girl.setage(y);
	cout << endl;

	cout << "info about child 1:";
	cout << "\nname : " << boy.getname();
	cout << "\nsecond name : " << boy.getsecond_name();
	cout << "\nage : " << boy.getage()<<endl;

	cout << "info about child 2:";
	cout << "\nname : " << girl.getname();
	cout << "\nsecond name : " << girl.getsecond_name();
	cout << "\nage : " << girl.getage()<<endl;

	system("pause");
	return 0;
}