// 2018_02_17_EdXCPP_Namespaces.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include "math.h"

using namespace std;
using namespace MyMath;


int main()
{

	double sq = sqrt(2.3);

	cout << "Square root of 2.3 is " << sq << endl;

	long p = pow(2, 4);

	cout << p << endl;

	//int d = MyMath::math::pow(2, -8);
	int d = math::pow(2, -8);

	cout << d << endl;

    return 0;
}

