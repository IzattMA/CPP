// 2018_02_10_1312_EdXCPP_DereferenceDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

	/********************
	* simple pointers   *
	*********************/

	int num = 3;

	// create a pointer variable to an int type and assign it the address of the integer straight-away
	int *pNum = &num;				//hex


	// output the value stored in pNUm
	cout << pNum << endl;			//hex


	/* 
	in ths output statement, we use the dereference operator.
	it is the same operator used to indicate a pointer variable, as well
	as the multiplication symbol, which demonstrates operator overloading in C++.
	the output of this stateemnt will be the value that is stored in num.
	we get the value through indirection because the dereference operator 
	"de-references" the memory address to get at the underlying value stored there.
	*/
	cout << *pNum << endl;		//3


	/* The dereference operator allows us to change the underlying value stored in num */
	*pNum = 45;

	cout << *pNum << endl;		//45

	cout << num << endl;		//45



}