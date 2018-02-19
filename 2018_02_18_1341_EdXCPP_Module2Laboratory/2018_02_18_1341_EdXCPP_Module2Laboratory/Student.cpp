#include "stdafx.h"
#include "Student.h"
#include <iostream>


using namespace std;

Student::Student()
{

}

Student::Student(string fName, string lName)
{
	_firstName = fName;
	_lastName = lName;
}

Student::Student(string fName, string lName,  int age, string address, string city, string phone)
{
	_firstName = fName;
	_lastName = lName;
	_age = age;
	_address = address;
	_city = city;
	_phone = phone;
}


Student::~Student()
{
}


void Student::SetAge(int age)
{
	if (age > 0)
	{
		this->_age = age;
	}
	else
	{
		cout << "Please enter a valid age" << endl;
	}
}

int Student::GetAge()
{
	return this->_age;
}

void Student::SetAddress(string address) {

	this->_address = address;

}

string Student::GetAddress() {

	return this->_address;
}

void Student::SetCity(string city) {

	this->_city = city;
}

string Student::GetCity() {

	return this->_city;
}


void Student::SetFirstName(string fName)
{
	this->_firstName = fName;
}

string Student::GetFirstName()
{
	return this->_firstName;
}


void Student::SetLastName(string lName)
{
	this->_lastName = lName;
}

string Student::GetLastName()
{
	return this->_lastName;
}



void Student::SetPhone(string phone) {

	this->_phone = phone;

}

string Student::GetPhone() {

	return this->_phone;
}

void Student::SitInClass() {

	cout << "Sitting in main theater." << endl;
}