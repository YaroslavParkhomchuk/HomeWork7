#include <iostream>
#include "Task1.h"
using namespace std;

int main()
{
	Human* teacher = new Teacher("John", "Teacher", "Physics");
	Human* student = new Student("Max", "Mathematics");

	teacher->print_name();
	teacher->print_info();
	student->print_name();
	student->print_info();

	delete teacher;
	delete student;
	return 0;
}
