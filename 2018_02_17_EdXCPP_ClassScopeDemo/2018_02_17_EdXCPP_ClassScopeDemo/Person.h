#pragma once

#include <string>

using namespace std;

class Person {

private:

	int _age;
	string _firstName;
	string _lastName;

public:

	Person();

	Person(string fName, string lName);

	Person(string fName, string lName, int age);

	~Person();

	void SetFirstName(string fName);
	string GetFirstName();

	void SetLastName(std::string lname);
	string GetLastName();

	void SetAge(int age);
	
	int GetAge();

	string SayHello();

};