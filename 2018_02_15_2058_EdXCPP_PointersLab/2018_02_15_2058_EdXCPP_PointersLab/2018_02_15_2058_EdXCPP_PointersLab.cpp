// 2018_02_15_2058_EdXCPP_PointersLab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;


class Person {
	
public:
	
	string name_;
	int age_;
	int height_;
	float weight_;

};


void PassByValue(int _value) {
	
	cout << "In PassByValue. The incoming value is " << _value << endl;
	_value = 8;
	cout << "In PassByValue. The new value is " << _value << endl;
}

void PassByRef(int &_value) {
	
	cout << "In PassByRef. The value is " << _value << endl;
	
	_value = 50;

	cout << "In PassByRef. The value is " << _value << endl;
}


void PrintPerson(Person& person) {
	cout << person.name_ << endl;
	cout << person.age_ << endl;
	cout << person.height_ << endl;
	cout << person.weight_ << endl;
}

void ModifyPerson(Person& person) {
	person.name_ = "Kirsten";
	person.age_ = 51;
	person.height_ = 69;
	person.weight_ = 150;
}

int main()
{

	int _num1;
	int _num2 = 0;
	int *_pNum = &_num2;

	_num1 = 3;
	*_pNum = 5;

	PassByValue(_num1);
	cout << "Back in main; the value of num1 is " << _num1 << endl;


	PassByRef(*_pNum);
	cout << "Back in main; the value of *_pNum is " << *_pNum << endl;

	PassByValue(*_pNum);

	double* pDbl_ = new double;  
	
	*pDbl_ = 1/137;
	cout << "The value of pDbl is " << *pDbl_ << endl;
	delete pDbl_;
	//cout << "The value of pDbl is after deleted is " << *pDbl_ << endl;  //Caused an unhandled exception


	Person _person;
	_person.name_ = "Max";
	_person.age_ = 58;
	_person.height_ = 68;
	_person.weight_ = 180;
	PrintPerson(_person);

	ModifyPerson(_person);
	PrintPerson(_person);


    return 0;
}

