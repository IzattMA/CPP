#include "stdafx.h"
#include "Person.h"
#include <iostream>

using namespace std;


Person::Person() {}

Person::Person(std::string fName, std::string lName) {
	_firstName = fName;
	_lastName = lName;
}

Person::Person(std::string fName, std::string lName, int age) {
	
	_firstName = fName;
	_lastName = lName;
	_age = age;
}

Person::~Person() {

	cout << "Person destructor called " << std::endl;

}


void Person::SetFirstName(std::string fName) {
	
	this->_firstName = fName;

}

string Person::GetFirstName() {

	return this->_firstName;
}

string Person::GetLastName() {

	return this->_lastName;

}

void Person::SetLastName(string lName) {

	this->_lastName = lName;

}

int Person::GetAge() {

	return this->_age;

}

void Person::SetAge(int age) {

	this->_age = age;

}

string Person::SayHello() {

	return "G'Day Mate";
}