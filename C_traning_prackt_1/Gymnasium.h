#pragma once
#include <iostream>
#include "Secondary_School.h"

using namespace std;
class Gymnasium :public Secondary_School
{
public:
	Gymnasium(string new_name = "Гимназия") :
		Secondary_School()
	{
		name = new_name;
	}
	Gymnasium(int new_number_student, float new_average_mark, string new_name = "Гимназия") :
		Secondary_School(new_number_student, new_average_mark)
	{
		name = new_name;
	}
	void set_average_mark(float new_average_mark)
	{
		_average_mark = new_average_mark;
	}
	void set_number_student(int new_number_student)
	{
		_number_student = new_number_student;
	}
	float get_average_mark()
	{
		return _average_mark;
	}
	int get_number_student() {
		return _number_student;
	}
	void get_info()
	{
		cout << "Название " << name << endl;
		cout << "\tСредний балл учеников " << _average_mark << endl;
		cout << "\tКоличество учеников " << _number_student << endl;
		cout << endl;
	}
};