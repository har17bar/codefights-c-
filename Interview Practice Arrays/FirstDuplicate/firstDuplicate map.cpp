
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int firstDuplicate(std::vector<int> a) {
	std::map<int, int> umap;
	for (double item : a) {
		if (umap[item]) {
			return item;
		}
		umap[item] = true;
	}
	return -1;
}

int main()
{
	std::vector<int> a = { 2, 1, 3 , 2 , 1 , 5, 3, 2 };
	cout << firstDuplicate(a);
}



