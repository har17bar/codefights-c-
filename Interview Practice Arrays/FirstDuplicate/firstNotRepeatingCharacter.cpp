
#include <iostream>
#include <map>


typedef std::map<char, int> MAP;
char firstNotRepeatingCharacter(std::string s);
using namespace std;

int main(){
	cout<<endl<<firstNotRepeatingCharacter("aab") << endl;
}

char firstNotRepeatingCharacter(std::string s) {

	MAP repeat;
	int len = s.size();
	int min;
	char m;
	if (len != 1) {
		for (int i = len - 1; i >= 0; --i) {
			if (repeat.count(s[i]) == 0) {
				repeat[s[i]] = i;
			}
			else {
				repeat[s[i]] = 0;
			}
		}
		min = repeat.begin()->second;
		map<char, int>::const_iterator it;
		for (it = repeat.begin(); it != repeat.end(); ++it) {
			cout << it->first << "=" << it->second << endl;
			if (it->second != 0 && (min == 0 || min>it->second)) {
				min = it->second;
				m = it->first;
			}
		}
	}
	else {
		m = s[0];
	}
	return len == 1 || min != 0 ? m : '_';
}


