#include <iostream>
#include<vector>
#include<string>
#include "chapter6.h"
using namespace std;
int compare(int p1, int *p2);

int main() {
	int i1,i2;
	cout << "please input two number:";
	cin >> i1 >> i2;
	cout << "the larger one is";
	int *i1p = &i1, *i2p = &i2;
	cout << compare(i1, i2p) << endl;
	return 0;
};

int compare(int p1, int *p2) {
	return p1>*p2?p1:*p2;
}

