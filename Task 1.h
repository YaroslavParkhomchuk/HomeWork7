#pragma once

#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	Human(string _name, string _subject) : name(_name), subject(_subject) {};
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
	Teacher(string _name, string _profession, string _subject)
		: Human(_name, _subject), profession(_profession) {}
	void print_info() const;

private:
	string profession;
};

class Student : public Human
{
public:
	Student(string _name, string _subject) : Human(_name, _subject) {}
	void print_info() const;
};

