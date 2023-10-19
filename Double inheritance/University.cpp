#include "University.h"
#include <iostream>
#include <string>
using namespace std;

void University::Set_Univ(string name_univer, int year, string rector)
{
	this->name_univer = name_univer;
	this->year = year;
	this->rector = rector;
}

void University::Get_Univ()
{
	cout << "\nUniversity: " << name_univer << "\nYear of foundation: " << year << "\nRector: " << rector;
}
