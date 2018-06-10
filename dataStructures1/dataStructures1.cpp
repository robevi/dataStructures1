// dataStructures1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string toRoman(int num) {
	if (num > 5000) {
		cout << "number is more than 5000, make it smaller" << endl;
		return "";
	}
	string roman = "";

	int ones = num % 10;
	int tens = (num % 100) / 10;
	int hundreds = (num % 1000) / 100;
	int thousands = (num % 10000) / 1000;

	cout << "thousands = " << thousands << endl;
	cout << "hundreds = " << hundreds << endl;
	cout << "tens = " << tens << endl;
	cout << "ones  = " << ones << endl;

	switch (thousands) {
		case 1:
			roman += "M";
			break;
		case 2:
			roman += "MM";
			break;
		case 3:
			roman += "MMM";
			break;
		case 4:
			roman += "MMMM";
			break;
		case 5:
			roman += "MMMMM";
			break;
		default:
			break;
	}
	switch(hundreds) {
		case 1:
			roman += "C";
			break;
		case 2:
			roman += "CC";
			break;
		case 3:
			roman += "CCC";
			break;
		case 4:
			roman += "CD";
			break;
		case 5:
			roman += "D";
			break;
		case 6:
			roman += "DC";
			break;
		case 7:
			roman += "DCC";
			break;
		case 8:
			roman += "DCCC";
			break;
		case 9:
			roman += "CM";
			break;
		default:
			break;
	}
	switch(tens) {
	case 1:
		roman += "X";
		break;
	case 2:
		roman += "XX";
		break;
	case 3:
		roman += "XXX";
		break;
	case 4:
		roman += "XL";
		break;
	case 5:
		roman += "L";
		break;
	case 6:
		roman += "LX";
		break;
	case 7:
		roman += "LXX";
		break;
	case 8:
		roman += "LXXX";
		break;
	case 9:
		roman += "XC";
		break;
	default:
		break;
	}
	switch(ones) {
		case 1:
			roman += "I";
			break;
		case 2:
			roman += "II";
			break;
		case 3:
			roman += "III";
			break;
		case 4:
			roman += "IV";
			break;
		case 5:
			roman += "V";
			break;
		case 6:
			roman += "VI";
			break;
		case 7:
			roman += "VII";
			break;
		case 8:
			roman += "VIII";
			break;
		case 9:
			roman += "IX";
			break;
		default:
			break;
	}
	
	return roman;
}

int main()
{
	int number;
	while(cin) {
		cin >> number;
		cout << "roman equilavent: " << toRoman(number) << endl;
	}
    return 0;
}

