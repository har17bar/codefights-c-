/*
	Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

	Example

	For inputArray = [3, 6, -2, -5, 7, 3], the output should be
	adjacentElementsProduct(inputArray) = 21.

	7 and 3 produce the largest product.
*/
#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int adjacentElementsProduct(std::vector<int> inputArray) {
	int newmax;
	int  max = inputArray[0] * inputArray[1];
	for (int i = 1; i < inputArray.size() - 1; ++i) {
		newmax = inputArray[i] * inputArray[i + 1];
		if (newmax > max)
			max = newmax;
	}
	return max;
}

int main() {
	vector <int> a = { -23, 4, -3};
	cout << adjacentElementsProduct(a) << endl;
}

