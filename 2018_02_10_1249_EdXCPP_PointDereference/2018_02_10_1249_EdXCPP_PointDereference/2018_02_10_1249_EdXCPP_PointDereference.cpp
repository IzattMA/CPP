// 2018_02_10_1249_EdXCPP_PointDereference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    
	int num = 3;
	int *pNum = &num;
	cout << pNum << endl;		//hex
	cout << *pNum << endl;		//3

	*pNum = 45;
	cout << *pNum << endl;		//45
	cout << num << endl;		//45

}

