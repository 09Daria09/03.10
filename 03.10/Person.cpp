#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
	name = nullptr;
	age = 0;
}

Person::Person(const char* n, int a)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n)+1, n);
	age = a;
}

Person::Person(const Person& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name)+1, obj.name);
	age = obj.age;
}

Person::~Person()
{
	delete[]name;
}

Person& Person::operator=(const Person& obj)
{
	name = new char[strlen(obj.name) + 1];
	for (int i = 0; i < strlen(obj.name); i++)
	{
		name[i] = obj.name[i];
	}
	name[strlen(obj.name)] = '\0';
	return *this;
}

void Person::Print()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}
