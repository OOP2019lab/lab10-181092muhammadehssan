#pragma once
#include<string>
using namespace std;

class course;
class student{
const string username;
string name;
string roll_number;
course **p;
void task2_addcourse(course *c_ptr);
public :
	friend class course;
	student(string,string);
	 void addcourse(course *c_ptr);
		friend ostream &operator << (ostream &out,student &a);
		friend ostream &operator << (ostream &out,course &a);
		void task3_dropcourse(course *s_ptr);
};