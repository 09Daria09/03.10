#include "Student.h"
#include<iostream>
using namespace std;

Student::Student():Person()
{
	scholarship = 0;
}

Student::Student(const char* n, int a, int scholarship):Person(n,a)
{
	this->scholarship = scholarship;
}

void Student::PrintStudent()
{
	Print();
	cout << "Scholarship: " << scholarship << endl;
}

Student::Student(const Student& obj) :Person(obj)
{
	scholarship = obj.scholarship;
}

Student& Student::operator=(const Student& obj)
{
	Person::Person(obj.name, obj.age);
	scholarship = obj.scholarship;
	return*this;
}
