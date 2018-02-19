#include "stdafx.h"
#include "Teacher.h"
#include <iostream>


using namespace std;

Teacher::Teacher()
{

}

Teacher::Teacher(string fName, string lName)
{
	_firstName = fName;
	_lastName = lName;
}

Teacher::Teacher(string fName, string lName, int age, string address, string city, string phone)
{
	_firstName = fName;
	_lastName = lName;
	_age = age;
	_address = address;
	_city = city;
	_phone = phone;
}


Teacher::~Teacher()
{
}


void Teacher::SetAge(int age)
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

int Teacher::GetAge()
{
	return this->_age;
}

void Teacher::SetAddress(string address) {

	this->_address = address;

}

string Teacher::GetAddress() {

	return this->_address;
}

void Teacher::SetCity(string city) {

	this->_city = city;
}

string Teacher::GetCity() {

	return this->_city;
}


void Teacher::SetFirstName(string fName)
{
	this->_firstName = fName;
}

string Teacher::GetFirstName()
{
	return this->_firstName;
}


void Teacher::SetLastName(string lName)
{
	this->_lastName = lName;
}

string Teacher::GetLastName()
{
	return this->_lastName;
}



void Teacher::SetPhone(string phone) {

	this->_phone = phone;

}

string Teacher::GetPhone() {

	return this->_phone;
}

void Teacher::GradeStudent() {

	cout << "Student graded" << endl;
}

void Teacher::SitInClass() {

	cout << "Sitting in front of class." << endl;

}