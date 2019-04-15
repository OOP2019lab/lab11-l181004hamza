#include"person.h"

person:: person(string fname,string lname,int agee)
{
	firstname=fname;
	lastname=lname;
	age=agee;
	cout<<"constructor for person called"<<endl;

}

void person :: setfname(string fname)
{
	firstname = fname;
}

string person :: getfname()
{
	return firstname;
}

void person :: setlname(string lname)
{
	lastname=lname;
}

string person :: getlname()
{
	return lastname;
}

void person :: setage(int agee)
{
	age=agee;
}

int person :: getage()
{
	return age;
}

void person :: printperson()
{
	cout<<"first name:"<<getfname()<<endl;
	cout<<"last name:"<<getlname()<<endl;
	cout<<"age:"<<getage()<<endl;
}

person :: ~person()
{
	cout<<"~person() called"<<endl;
}