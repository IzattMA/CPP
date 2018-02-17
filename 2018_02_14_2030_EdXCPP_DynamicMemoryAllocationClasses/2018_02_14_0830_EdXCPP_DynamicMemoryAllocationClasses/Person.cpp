#include "stdafx.h"
#include "Person.h"
#include <iostream>


using namespace std;


Person::Person() {}


Person::Person(string fName, string lName) {
	this->firstName = fName;
	this->lastName = lName;
}


Person::Person(string fName, string lName, int age) {
	
	this->firstName = fName;
	this->lastName = lName;

	this->age = age;
}


Person::~Person() {

	std::cout << "Person destructor called " << std::endl;

}


void Person::SetFirstName(string fName) {
	this->firstName = fName;

}


string Person::GetFirstName() {

	return this->firstName;
}



void Person::SetLastName(string lName) {

	this->lastName = lName;

}



string Person::GetLastName() {

	return this->lastName;
}



void Person::SetAge(int age) {

	this->age = age;
		
}


void SayHello(){}