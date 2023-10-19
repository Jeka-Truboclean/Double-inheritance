#pragma once
#include "Human.h"
#include "University.h"

class Student : public Human, public University
{
	int arr[10]; // масив оцінок
	int year; // рік навчання
	string faculty; // факультет
public:
	Student() = default;
	void Set(int arr[], int year, string faculty, string name,
		int age, string name_univ, int year_found, string rector);
	void Get();
};

