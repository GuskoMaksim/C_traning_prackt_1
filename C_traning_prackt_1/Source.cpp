#include <iostream>
#include <Windows.h>
#include "School.h"
#include "Gymnasium.h"
#include "University.h"
#include "Institute.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	School Sh2(1000, 7.2);
	Gymnasium Gim(700, 8.9);
	Institute Ins(4000, 6);
	University Un(8000, 7.5);

	Sh2.get_info();
	Gim.get_info();
	Ins.get_info();
	Un.get_info();
}