#include "stdafx.h"
#include <cmath>
#include <iostream>
#include "math.h"

using namespace std;

MyMath::math::math() {


}


MyMath::math::~math() {

}

int MyMath::math::pow(int base, int exp) {

	cout << endl << "In MyMath::math::pow" << endl;

	int result = 1;

	if (exp > 0) {

		for (int n = 0; n < exp; n++) {

			result = result * base;

		} 



	} else {

		cout << "Enter only positive values for the exponent" << endl;

		result = 0;

	}

	return result;


}