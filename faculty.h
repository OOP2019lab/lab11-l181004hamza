#pragma once
#include<iostream>
#include"person.h"
#include<string>
using namespace std;

class faculty : public person
{
	int courses;
	float number;

public:

	faculty(string,string,int,int,float);
	void setcourses(int);
	int getcourses();
	void setnumber(float);
	float getnumber();
	void printfaculty();
	~faculty();

};