#pragma once
#include<iostream>
#include"Course.h"
#include"student.h"
#include<string>
using namespace std;
int main()
{
	student *s1=new student( "Anum", "11-1351");
	student *s2=new student("Sara", "12-6462");
	student *s3=new student("Sana", "11-4531");
	student *s4=new student("Zara", "12-4342");
	student *s5=new student("Hira", "11-5940");

	course *c1=new course("OOP", "CS102");
	course *c2=new course( "PF", "CS101");
	course *c3=new course( "AI", "CS365");

	s1->addcourse(c1);
	s1->addcourse(c2);
	s1->addcourse(c1);
	s1->addcourse(c3);
	s2->addcourse(c2);
	s3->addcourse(c2);
	s4->addcourse(c2);
	s5->addcourse(c2);
	//c1->addstudent(s5);
	//cout<<*s1;
	//cout<<*c2;
	//cout<<*c1;
	//c1->task2_addstudent(s5);
	//s5->addcourse(c3);
	cout<<endl<<*c2<<endl;
	cout<<endl<<endl<<*s5<<endl;
	s5->task3_dropcourse(c1);
	cout<<endl<<endl<<*s5<<endl;
	c3->task3_dropcourse(s4);




}
