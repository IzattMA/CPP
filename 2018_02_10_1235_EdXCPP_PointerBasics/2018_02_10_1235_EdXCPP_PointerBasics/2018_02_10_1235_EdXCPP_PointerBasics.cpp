// 2018_02_10_1235_EdXCPP_PointerBasics.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int num = 3;
	int *pNum = &num;

	cout << pNum << endl;

	return 0;
}