#include <iostream>
#include<vector>
using namespace std;

int main() {
	int a[3] = {1,2,3};
	int b[3] = {1,2,3};
	if (sizeof(a) == sizeof(b)) {
		int i = 0;
		int length = sizeof(a) / sizeof(a[0]);
		while (i<length&&a[i] == b[i])
			++i;
		if (i == length)
			cout << "they are equal!" << endl;
		else 
			cout << "they are difference!" << endl;
	}
	else
		cout << "they are difference!" << endl;
	vector<int> i = { 1,2,3 };
	vector<int> j = { 1,2,3 };
	if (i == j)
		cout << "they are equal!" << endl;
	else
		cout << "they are difference!" << endl;
};


