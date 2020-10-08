#pragma once
class Educ_Instit
{
public :
	virtual void set_average_mark(float) = 0;
	virtual void set_number_student(int) = 0;
	virtual float get_average_mark() = 0;
	virtual int get_number_student() = 0;
	virtual void get_info() = 0;
};