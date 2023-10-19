#include "Student.h"
#include "Human.h"
#include "University.h"
#include <iostream>
#include <string>
using namespace std;

void Student::Set(int arr[], int year, string faculty,
	string name, int age, string name_univ, int year_found, string rector)
{
	Human::Set_Human(name, age);
	University::Set_Univ(name_univ, year_found, rector);
	for (int i = 0; i < 10; i++)
	{
		this->arr[i] = arr[i];
	}
	this->year = year;
	this->faculty = faculty;
}

void Student::Get()
{
	cout << "\nEvaluation: ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\nGrate: " << year << "\nFaculty: " << faculty;
}
