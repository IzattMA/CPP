// 2018_02_17_EdXCPP_ClassScopeDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Dog.h"
#include <iostream>

using namespace std;


int main()
{
	Person* p_ = new Person("Tom", "Thumb");

	cout << "Person first name = " << p_->GetFirstName() << endl;

	cout << "Person says 'Hello' this way: " << p_->SayHello() << endl;

	Dog* d_ = new Dog("Pepper", "Thumb");

	cout << "Dog first name = " << d_->GetFirstName() << endl;

	cout << "Dog says 'Hello' this way: " << d_->SayHello() << endl;
	

    return 0;
}

