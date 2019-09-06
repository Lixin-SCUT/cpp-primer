#include <iostream>
#include<vector>
using namespace std;
//typedef int a[3];
using a = int[3];
int main() {
	
	int ia[3][3] = { {1,2,3},{ 4,5,6 } ,{ 7,8,9 } };
	for (auto &x : ia)
		for (auto y : x)
			cout << y << ' ';
	for (int x = 0; x < 3; ++x)
		for (int y = 0; y < 3; ++y)
			cout << ia[x][y] << ' ';
	for (a *x = begin(ia); x != end(ia); ++x)
		for (int*  y = *x;y != *x+3; ++y)
			cout << *y << ' ';	
};


