// 2018_02_14_2007_EdXCPP_DynamicMemoryAllocation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{

	using namespace std;

	//declare pointer to int and allocate space with new keyword
	int *pInt_ = new int;

	//declare pointer to double and allocate space with new keyword
	double *pDouble_ = new double;


	//store value in pInt
	*pInt_ = 3;

	//store value in pDouble
	*pDouble_ = 5;

	//output values and memory addresses
	cout << "value stored at pInt = " << *pInt_ << ": memory address = " << pInt_ << endl;
	cout << "value stored at pInt = " << *pDouble_ << ": memory address = " << pDouble_ << endl;

	cout << "Size of pInt = " << sizeof(pInt_);
	cout << " Size of *pInt = " << sizeof(*pInt_) << endl;

	cout << "Size of pDouble = " << sizeof(pDouble_);
	cout << " Size of *pDouble = " << sizeof(*pDouble_) << endl;

	//GC
	delete pInt_;
	delete pDouble_;


    return 0;
}

