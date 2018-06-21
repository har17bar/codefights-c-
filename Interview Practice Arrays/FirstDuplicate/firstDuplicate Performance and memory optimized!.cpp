/*
 Given an array a that contains only numbers in the range from 
 1 to a.length, find the first duplicate number for which the 
 second occurrence has the minimal index. In other words, if there
 are more than 1 duplicated numbers, return the number for which
 the second occurrence has a smaller index than the second
 occurrence of the other number does. If there are no such
 elements, return -1.
 
 */
#include <vector>
#include <iostream>

using namespace std;

int firstDuplicate(std::vector<int> a) {

	for (double item : a) {
		if (a[abs(item) - 1]<0) {
			return abs(item);
		}
		a[abs(item) - 1] = -a[abs(item) - 1];
	}
	return -1;
}

int main()
{
	std::vector<int> a = { 1,2,3,3,8,7,6,9 };
	cout << firstDuplicate(a) << endl;
}



