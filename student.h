#pragma once
#include<iostream>
#include"person.h"
#include<string>
using namespace std;

class student: public person
{
	
	float cgpa;

protected:

	int age;
	
public:

	student(string,string,int,float);
	void setgpa(float);
	float getgpa();
	void printstudent();
	~student();


};