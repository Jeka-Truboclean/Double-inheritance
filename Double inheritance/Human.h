#pragma once
#include "Student.h"
#include "University.h"

class Human
{
protected:
	string name;
	int age;
public:
	Human() = default;
	void Set_Human(string name, int age);
	void Get_Human();
};

