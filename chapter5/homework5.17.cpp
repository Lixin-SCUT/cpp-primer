#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	vector<int> v1;
	vector<int> v2;
	int len = (v1.size() < v2.size() ? v1.size() : v2.size());
	int i = 0;
	for (; i < len; ++i)
		if (v1[i] != v2[i])
			return -1;
	return 1;
			
};


