#include"student.h"

student :: student (string fname,string lname,int agee,float gpa) : person (fname,lname, agee)
{
	
	cgpa=gpa;
	
}

void student :: setgpa(float gpa)
{
	cgpa=gpa;
}

float student :: getgpa()
{
	return cgpa;
}

void student :: printstudent()
{
	cout<<"Student:"<<endl;
	cout<<"First Name:"<<getfname()<<endl;
	cout<<"Last Name:"<<getlname()<<endl;
	cout<<"CGPA:"<<getgpa()<<endl;
	cout<<"Age:"<<getage()<<endl;
}

student :: ~student()
{
	cout<<"~student() called"<<endl;
}