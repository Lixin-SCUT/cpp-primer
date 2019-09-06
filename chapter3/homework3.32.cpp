#include <iostream>
#include<vector>
using namespace std;

int main() {
	int a[10];
	for (int i = 0; i < 10; ++i) {
		a[i] = i;
		cout << a[i] << ' ';
	}
	int b[10] ;
	for (int i = 0; i < 10; ++i) 
		b[i] = a[i];	
	vector<int> v1(10, 10);
	vector<int> v2 = v1;
	for (auto i : v2)
		cout << i << ' ';
};


