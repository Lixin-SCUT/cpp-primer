#include <iostream>
#include<vector>
using namespace std;

int main() {
	int a[10];
	for (int i = 0; i < 10; ++i) {
		a[i] = i;
		cout << a[i] << ' ';
	}
	for (int *i = begin(a); i != end(a); ++i) {
		*i = 0;
		cout << *i << ' ';
	}
		

};


