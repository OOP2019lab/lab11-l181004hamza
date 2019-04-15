#pragma once
#include<iostream>
using namespace std;
#include <string>

class person
{
	string firstname;
	string lastname;

protected:

	int age;

public:

	person(string,string,int);
	void setfname(string);
	void setlname(string);
	void setage(int);
	string getfname();
	string getlname();
	int getage();
	void printperson();
	~person();

};