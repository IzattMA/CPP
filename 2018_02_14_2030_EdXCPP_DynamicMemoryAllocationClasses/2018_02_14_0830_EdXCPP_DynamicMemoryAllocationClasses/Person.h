#pragma once

#include "stdafx.h"
#include <iostream>


using namespace std;

class Person {

private:

	string firstName;
	string lastName;

	int age;


public:

	Person();

	Person(string fName, string lName);

	Person(string fName, string lName, int age);

	~Person();

	void SetFirstName(string fName);
	string GetFirstName();

	void SetLastName(string lname);
	string GetLastName();

	void SetAge(int age);
	int GetAge();

	void SayHello();

};