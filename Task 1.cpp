#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	Human() {};
	virtual void print_info() const = 0;
	virtual void print_name() const = 0;
	virtual ~Human() {};
};

class Teacher : public Human
{
public:
	Teacher(string name1, string profession1, string subject1) : 
		name(name1), profession(profession1), subject(subject1) {}
	void print_name() const
	{
		cout << "Name of teacher: " << name << endl;
	}
	void print_info() const 
	{
		cout << "Profession: " << profession << "\nTeaches: " << subject << endl;
	}
private:
	string name;
	string profession;
	string subject;
};
class Student : public Human
{
public:
	Student(string name2, string subject2): name(name2), subject(subject2) {}
	void print_name() const
	{
		cout << "\nName of student: " << name << endl;
	}
	void print_info() const
	{
		cout << "Learns: " << subject << endl;
	}
private:
	string name;
	string subject;
}; 

int main()
{
	Teacher teacher("John", "Teacher", "Physic");
	Student student("Max", "Mathematic");
	teacher.print_name(); teacher.print_info();
	student.print_name(); student.print_info();
}
