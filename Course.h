#pragma once
#include<string>
using namespace std;
class student;
class course{
string course_name;
const string course_number;
void addstudent(student *s_ptr);
student **s;
public:
	friend class student;
	course(string,string);
	friend ostream &operator << (ostream &out,course &a);
	friend ostream &operator << (ostream &out,student &a);
	void task2_addstudent(student *s_ptr);
	void task3_dropcourse(student *s_ptr);
	
	



};