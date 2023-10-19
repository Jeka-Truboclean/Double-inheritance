#include "Human.h"
#include <iostream>
#include <string>
using namespace std;

void Human::Set_Human(string name, int age)
{
	this->name = name;
	this->age = age;
}

void Human::Get_Human()
{
	cout << "\nName: " << name << "\nAge: " << age;
}
