#include"faculty.h"

faculty::faculty(string fname,string lname,int agee,int coursen,float num ): person (fname,lname,agee)
{
	courses=coursen;
	number=num;
}

void faculty :: setcourses (int n)
{
	courses=n;
}

int faculty :: getcourses()
{
	return courses;
}

void faculty :: setnumber(float num)
{
	number =num;
}

float faculty :: getnumber ()
{
	return number;
}

void faculty :: printfaculty()
{
	cout<<"Faculty member:"<<endl;
	cout<<"First Name:"<<getfname()<<endl;
	cout<<"Last Name:"<<getlname()<<endl;
	cout<<"Age:"<<getage()<<endl;
	cout<<"No of courses:"<<getcourses()<<endl;
	cout<<"Extension number:"<<getnumber()<<endl;
}

faculty::~faculty()
{
	cout<<"~faculty() called"<<endl;
}