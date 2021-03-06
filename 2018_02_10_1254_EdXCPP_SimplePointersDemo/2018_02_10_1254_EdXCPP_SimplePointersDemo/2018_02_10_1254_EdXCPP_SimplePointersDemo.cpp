// 2018_02_10_1254_EdXCPP_SimplePointersDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{

	/********************
	* simple pointers   *
	*********************/

	int num = 3;

	// create a pointer variable to an int type and assign it the address of the integer straight-away
	int *pNum = &num;

	// output the value of num
	std::cout << num << std::endl;

	// output the address of num to compare with the value in pNum
	std::cout << &num << std::endl;

	// output the address value stored in pNUm
	std::cout << pNum << std::endl;

	// output the value at the address by dereferencing the address
	std::cout << *pNum << std::endl;


}

