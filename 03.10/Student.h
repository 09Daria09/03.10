#pragma once
#include "Person.h"
class Student :
    public Person
{
    int scholarship;
public:
    Student();
    Student(const char* n, int a, int scholarship);
    void PrintStudent();
    Student(const Student& obj);
    Student& operator=(const Student& obj);

};

