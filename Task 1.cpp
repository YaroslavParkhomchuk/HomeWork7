#include <iostream>
#include <string>
#include "Task1.h"
using namespace std;

void Human::print_name() const
{
	cout << "Name: " << name << "\n";
}

void Teacher::print_info() const
{
	cout << "Profession: " << profession << "\nTeaches: " << subject << "\n\n";
}

void Student::print_info() const
{
	cout << "Learns: " << subject << "\n";
}