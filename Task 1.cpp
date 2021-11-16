#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	virtual void print_info() const = 0;
	void print_name()
	{
		cout << "Name: " << name << "\n";
	}
	virtual ~Human() {};

protected:
	string name;
	string subject;
	Human(string name1, string subject1) : name(name1), subject(subject1) {};
};

class Teacher : public Human
{
public:
	Teacher(string name1, string profession1, string subject1) 
		: Human(name1, subject1), profession(profession1) {}
	void print_info() const 
	{
		cout << "Profession: " << profession << "\nTeaches: " << subject << "\n\n";
	}
	
private:
	string profession;
};

class Student : public Human
{
public:
	Student(string name2, string subject2) : Human(name2, subject2) {}
	void print_info() const
	{
		cout << "Learns: " << subject << "\n";
	}
}; 

int main()
{
	Teacher teacher("John", "Teacher", "Physics");
	Student student("Max", "Mathematics");
	teacher.print_name(); teacher.print_info();
	student.print_name(); student.print_info();
	return 0;
}
