#include "stdafx.h"
#include <iostream>
#include <map>
using namespace std;
typedef std::map<char, int> MAP;
char firstNotRepeatingCharacter(std::string s) {

	MAP repeat;
	for (int i = 0; i < s.size(); ++i) {
		if (repeat.count(s[i]) == 0) {
			repeat[s[i]] = i;
		}
		else {
			repeat[s[i]] = 100;
		}
	}

	return 0;
}


int main()
{
	cout<<firstNotRepeatingCharacter("abcacvfabhyad")<<endl;
}


