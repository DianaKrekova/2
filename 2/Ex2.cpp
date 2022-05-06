#include "Ex2.h"

string deletMinus(string s)
{
	string str = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != '-') {
			str.append(s, i, 1);
		}
	}
	return str;
}

string five(string s)
{
	string str;
	for (int i = 0; i < s.length(); i++) {
		str += '5';
	}
	return str;
}

char getRandomSymbol()
{
	return 'A' + rand() % ('z' - 'A');
}

string randChange(string s)
{
	string str;
	for (int i = 0; i < s.length(); i++) {
		str += getRandomSymbol();
	}
	return str;
}


