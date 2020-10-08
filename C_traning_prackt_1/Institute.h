#pragma once
#include <iostream>
#include "Higher_instit.h"

using namespace std;

class Institute:
	public Higher_instit
{
public:
	Institute(string new_name = "Институт") :
		Higher_instit()
	{
		name = new_name;
	}
	Institute(int new_number_student, float new_average_mark, string new_name = "Институт") :
		Higher_instit(new_number_student, new_average_mark)
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
		cout << "\tСредний балл студентов " << _average_mark << endl;
		cout << "\tКоличество студентов " << _number_student << endl;
		cout << endl;
	}
};