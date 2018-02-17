// 2018_02_14_0830_EdXCPP_DynamicMemoryAllocationClasses.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "stdafx.h"
#include "Person.h"
#include <string>

using namespace std;

int main() {

	Person *pOne = new Person("Tom", "Thumb", 25);

	cout << "First Name of pOne = " << pOne->GetFirstName() << endl;

	cout << "Memory address of pOne = " << &pOne << endl;

	delete pOne;

	return 0;
}


