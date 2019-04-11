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
	Child()
	{
		this->age = 0;
		this->name = "";
		this->second_name = "";
	}
	Child(string &name, string &second_name, int age)
	{
		this->age = age;
		this->name = name;
		this->second_name = second_name;
	}
	void setname(string n) { this->name = n; }
	void setsecond_name(string n) { this->second_name = n; }
	void setage(const int a) { this->age = a; }
	string getname() { return name; }
	string getsecond_name() { return second_name; }
	int getage() { return age; }
	~Child() {
		this->age = 0;
		this->name = "";
		this->second_name = "";
		cout << "\nchild destroyed\n";
	}
};

int main()
{
	string s,n;
	cout << "Enter name: ";
	cin >> s;
	cout << "Enter second name: ";
	cin >> n;
	int i;
	cout << "Enter age: ";
	cin >> i;
	Child boy(s, n, i);

	cout << "Enter name: ";
	cin >> s;
	cout << "Enter second name: ";
	cin >> n;
	int y;
	cout << "Enter age: ";
	cin >> y;
	Child girl(s, n, y);
	cout << endl;

	cout << "info about child 1:";
	cout << "\nname : " << boy.getname();
	cout << "\nsecond name : " << boy.getsecond_name();
	cout << "\nage : " << boy.getage() << endl;

	cout << "info about child 2:";
	cout << "\nname : " << girl.getname();
	cout << "\nsecond name : " << girl.getsecond_name();
	cout << "\nage : " << girl.getage() << endl;

	system("pause");
	return 0;
}