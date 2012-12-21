// AnagramChecker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool anagramChecker(string input1, string input2)
{
	if (input1.length() != input2.length())
	{
		return false;
	}

	sort(input1.begin(), input1.end());
	sort(input2.begin(), input2.end());

	if (input1 == input2)
	{
		return true;
	}

	return false;
}

bool IsUniqueCharacters(string input)
{
	sort(input.begin(), input.end());
	cout <<"The input to IsUniqueCharacters is " << input << endl;
	return false;
}

int _tmain(int argc, _TCHAR* argv[])
{
	string string1("asha");
	string string2("hjug");

	if (anagramChecker(string1, string2))
	{
		cout <<"Anagram success!" << endl;
	}
	else
	{
		cout <<"Anagram fail" << endl;
	}

	IsUniqueCharacters(string1);

	return 0;
}

