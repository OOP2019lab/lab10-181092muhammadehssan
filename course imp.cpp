#include<iostream>
#include"student.h"
#include"Course.h"
using namespace std;
course::course(string b,string c):course_number(c)
{
	
	this->course_name=b;
	this->s=new student *[4];
	for(int i=0;i<4;i++)
		this->s[i]=nullptr;

}
void course::addstudent(student *s_ptr)
{
	bool flag=0;
	for(int i=0;i<4;i++)
	{
			if(this->s[i]==nullptr)
			{
				
				{
				this->s[i]=s_ptr;
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
ostream &operator << (ostream &out,course &a)
{
	
	out<<"Course name is : "<<a.course_name<<endl;
	out<<"Course number is : "<<a.course_number<<endl;
	
for(int i=0;i<4;i++)
{
	if(a.s[i]!=nullptr)
	{
	out<<"Name is : "<<a.s[i]->name<<endl;
	out<<"Roll number is : "<<a.s[i]->roll_number<<endl;
	out<<"Username is : "<<a.s[i]->username<<endl;
	}
}
out<<endl;
return out;
}
void course::task2_addstudent(student *s_ptr)
{
	bool flag=0;
	for(int i=0;i<4;i++)
	{
		if(this->s[i]==s_ptr)
			{
				cout<<"Same student already exists"<<endl;
			flag=1;
			}
		else if(this->s[i]==nullptr)
			{
				if(this->s[i]!=s_ptr)
				{
				this->s[i]=s_ptr;
				s[i]->task2_addcourse(this);
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
void course::task3_dropcourse(student *s_ptr)
{
	bool flag=0;
	for(int i=0;i<4;i++)
	{
		if(this->s[i]==s_ptr)
		{
			flag =1;
			delete this->s[i]->p[i];
			this->s[i]->p[i]=nullptr;
			this->s[i]->task3_dropcourse(this);
		}
	}
	if(flag==0)
		cout<<"not registred"<<endl;
}