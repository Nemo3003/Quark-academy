#include<iostream>

using namespace std;

int main()
{
	int workedHours;
	float hourSalary;
	float totalSalary;
	cout <<"Add the amount of hours worked:";
	cin >>workedHours;
	cout <<"Add the salary per hour:";
	cin >> hourSalary;
	totalSalary = workedHours * hourSalary;
	cout <<"The total salary is:";
	cout <<totalSalary;
	return 0;
}
