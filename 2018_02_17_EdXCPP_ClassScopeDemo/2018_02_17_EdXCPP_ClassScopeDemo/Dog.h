#pragma once

#include <string>

using namespace std;

class Dog {

private:

	int			_age;
	string		_firstName;
	string		_lastName;

public:

	Dog();

	Dog(string fName, string lName);

	Dog(string fName, string lName, int age);

	~Dog();

	void SetFirstName(string fName);
	string GetFirstName();

	void SetLastName(string lname);
	string GetLastName();

	void SetAge(int age);
	int GetAge();

	string SayHello();

};