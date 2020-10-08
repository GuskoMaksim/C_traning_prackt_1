#pragma once
#include <iostream>
#include "Educ_Instit.h"
#include <string>

using namespace std;

class Secondary_School:public Educ_Instit
{
protected:
	float _average_mark;
	int _number_student;
	string name;
public:
	Secondary_School()
	{
		cout << "¬ведите средний балл ";
		cin >> _average_mark;
		cout << "¬ведите количество учеников ";
		cin >> _number_student;
	}
	Secondary_School(int new_number_student, float new_average_mark):
		_average_mark(new_average_mark),
		_number_student(new_number_student)
	{

	}
};