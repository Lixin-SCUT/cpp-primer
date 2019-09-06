#include <iostream>
#include<vector>
using namespace std;

int main() {
	int a[10] ;
	vector<int> i = { 1,2,3,4,5,6,7,8,9,10 };
	int e = 0;
	for (auto x : i)
		a[e++] = x;
	for (auto x : a)
		cout << x << ' ';
};


