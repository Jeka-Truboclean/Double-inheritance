#pragma once
#include "Human.h"
#include "Student.h"

class University
{
protected:
	string name_univer;
	int year;
	string rector;
public:
	University() = default;
	void Set_Univ(string name_univer, int year, string rector);
	void Get_Univ();
};

