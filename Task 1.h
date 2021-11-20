#pragma once

#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	Human(string name1, string subject1) : name(name1), subject(subject1) {};
	virtual void print_info() const = 0;
	void print_name() const;
	virtual ~Human() {};

protected:
	string name;
	string subject;
};

class Teacher : public Human
{
public:
	Teacher(string name1, string profession1, string subject1)
		: Human(name1, subject1), profession(profession1) {}
	void print_info() const;

private:
	string profession;
};

class Student : public Human
{
public:
	Student(string name2, string subject2) : Human(name2, subject2) {}
	void print_info() const;
};

