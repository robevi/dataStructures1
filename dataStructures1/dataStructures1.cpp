// dataStructures1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

char numerals[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};

string toRoman(int num) {
	if (num > 5000) {
		cout << "number is more than 5000, make it smaller" << endl;
		return;
	}
	int ones = num;
	while (ones >= 10)
		ones /= 10;
	cout << "ones  = " << ones << endl;
}

int main()
{
    return 0;
}

