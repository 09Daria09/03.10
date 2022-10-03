#pragma once
#include "Person.h"
class Teacher :
    public Person
{
    int salary;
public:
    Teacher();
    Teacher(const char* n, int a, int salary);
    void PrintTeacher();
    Teacher(const Teacher& obj);
    Teacher& operator=(const Teacher& obj);
};

