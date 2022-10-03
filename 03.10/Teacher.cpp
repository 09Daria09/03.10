#include "Teacher.h"
#include<iostream>
using namespace std;

Teacher::Teacher():Person()
{
	salary = 0;
}

Teacher::Teacher(const char* n, int a, int salary):Person(n,a)
{
	this->salary = salary;
}

void Teacher::PrintTeacher()
{
	Print();
	cout << "Salary: " << salary << endl;
}

Teacher::Teacher(const Teacher& obj):Person(obj)
{
	salary = obj.salary;
}

Teacher& Teacher::operator=(const Teacher& obj)
{
	Person::Person(obj.name, obj.age);
	salary = obj.salary;
	return*this;
}
