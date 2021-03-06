// 2018_02_12_0845_PassAllReference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>;
#include <cmath>;
using namespace std;

void passByRef(int &numAX, int &numBX, int &numAddX, int &numSubtractX, int &numMultiplyX, double &numDivideX, double &numExponentX);  //required else raises a passByRef error

int main()
{

	int numA = 3;
	int numB = 4;
	int numAdd = 0;
	int numSubtract = 0;
	int numMultiply = 0;
	double numDivide = 0;
	double numExponent = 0;


	passByRef(numA, numB, numAdd, numSubtract, numMultiply, numDivide, numExponent);


	return 0;
}

void passByRef(int &numAX, int &numBX, int &numAddX, int &numSubtractX, int &numMultiplyX, double &numDivideX, double &numExponentX)
{

	numAddX = numAX + numBX;
	numSubtractX = numAX - numBX;
	numMultiplyX = numAX * numBX;
	numDivideX = (1.0 * numAX) / (1.0 * numBX);
	numExponentX = pow(1.0 * numAX, 1.0 * numBX);
	
}


