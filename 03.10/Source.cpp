#include<iostream>
#include"Person.h"
#include"Student.h"
#include"Teacher.h"
using namespace std;
int main()
{
	Person obj1("Katya", 4);
	Person obj2 = obj1;
	obj2.Print();
	Student stud("Vika", 17,1200);
	Student stud2 = stud;
	stud2.Print();
	Teacher teach("Galina", 38, 10100);
	Teacher teach2 = teach;
	teach2.Print();
}