// 2018_02_10_1718_EdXCPP_ReferenceTypes_PassByReference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void passByRef(int &num1);  //required else raises a passByRef error

int main()
{

	int num = 3;
	cout << "In main()" << endl;
	cout << "Value of num is " << num << endl;

	passByRef(num);

	cout << "Back in main and the value of num is  " << num << endl;


	return 0;
}

void passByRef(int &num1)
{
	cout << "In passByRef()" << endl;
	cout << "Value of num1 is " << num1 << endl;

	// modify num1 which will now change num
	num1++;

	cout << "num1 is now " << num1 << endl;
}
