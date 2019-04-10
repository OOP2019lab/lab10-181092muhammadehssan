#include<iostream>
#include"student.h"
#include"Course.h"
using namespace std;
student::student(string b,string c):username(b)
{
	this->name=b;
	this->roll_number=c;
	this->p=new course*[2];
	for(int i=0;i<2;i++)
		this->p[i]=nullptr;

}
void student::addcourse(course *c_ptr)
{
	bool flag=0;
	for(int i=0;i<2;i++)
	{
		if(this->p[i]==c_ptr)
			{
				cout<<"Same course already exists"<<endl;
			flag=1;
			}
		else if(this->p[i]==nullptr)
			{
				
				{
				this->p[i]=c_ptr;
				p[i]->addstudent(this);
				flag=1;
				break;
				}
			}

	}
	if(flag==0)
	{
		cout<<"Already filled"<<endl;
	}
}
ostream &operator << (ostream &out,student &a)
{
	out<<"Username : "<<a.username<<endl;
	out<<"Roll number : "<<a.roll_number<<endl;
	out<<"Name : "<<a.name<<endl;
	for(int i=0;i<2;i++)
	{
		if(a.p[i]!=nullptr)
			
			{
				out<<"Course name : "<<a.p[i]->course_name<<endl;
				out<<"Course number : "<<a.p[i]->course_number<<endl;
			}	
	}
	out<<endl;
	return out;
}
void student::task2_addcourse(course *p_ptr)
{
	bool flag=0;
	for(int i=0;i<2;i++)
	{
			if(this->p[i]==nullptr)
			{
				if(this->p[i]->course_name!=p_ptr->course_name)
				{
				this->p[i]=p_ptr;
				flag=1;
				break;
				}
			}

	}
	if(flag==0)
	{
		cout<<"Already filled"<<endl;
	}
}
void student::task3_dropcourse(course *s_ptr)
{
	bool flag=0;
	for(int i=0;i<2;i++)
	{
		if(this->p[i]==s_ptr)
		{
			flag=1;
			delete this->p[i]->s[i];
			this->p[i]->s[i]=nullptr;
			this->p[i]->task3_dropcourse(this);
		}

		
	}
	if(flag==0)
		cout<<"not registred"<<endl;

}