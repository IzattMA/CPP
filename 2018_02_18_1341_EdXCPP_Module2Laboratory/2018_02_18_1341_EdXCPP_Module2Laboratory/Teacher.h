#pragma once


#include <string>

using namespace std;

class Teacher{

private:

	string		_address;
	int			_age;
	string		_city;
	string		_firstName;
	string		_lastName;
	string		_phone;

public:

	Teacher();

	Teacher(string fName, string lName);

	Teacher(string fName, string lName, int age, string address, string city, string phone);

	~Teacher();


	void SetAddress(string);
	string GetAddress();

	void SetAge(int age);
	int GetAge();

	void SetCity(string city);
	string GetCity();


	void SetFirstName(string fName);
	string GetFirstName();

	void SetLastName(string lname);
	string GetLastName();

	void SetPhone(string);
	string GetPhone();

	void GradeStudent();

	void SitInClass();
};