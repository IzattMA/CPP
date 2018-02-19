#include "stdafx.h"
#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog() {}

Dog::Dog(string fName, string lName) {
	_firstName = fName;
	_lastName = lName;
}

Dog::Dog(std::string fName, std::string lName, int age) {

	_firstName = fName;
	_lastName = lName;
	_age = age;
}

Dog::~Dog() {

	cout << "Dog destructor called " << std::endl;

}


void Dog::SetFirstName(string fName) {

	this->_firstName = fName;

}

string Dog::GetFirstName() {

	return this->_firstName;
}

string Dog::GetLastName() {

	return this->_lastName;

}

void Dog::SetLastName(string lName) {

	this->_lastName = lName;

}

int Dog::GetAge() {

	return this->_age;

}

void Dog::SetAge(int age) {

	this->_age = age;

}

string Dog::SayHello() {

	return "W'oof Mate";
}