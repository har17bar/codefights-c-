
#include <vector>
#include <iostream>
#include <string>
#include <bitset> 
using namespace std;


int firstDuplicate(std::vector<int> a) {
	int length = a.size();
	int previous_bit_arr = 0;
	int new_bit_arr = 0;
	for (int i = 0; i < length; i++) {
		new_bit_arr |= (1 << a[i]);
		if (previous_bit_arr != new_bit_arr) {
			previous_bit_arr |= (1 << a[i]);
		}
		else {
			return a[i];
		}
	}
	return -1;
}

int main()
{
	std::vector<int> a = { 2, 1, 3, 5, 3, 2 };
	//int b = 0;
	//string binary = std::bitset<32>(b).to_string(); //to binary
	cout << firstDuplicate(a);
}



