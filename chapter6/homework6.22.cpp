#include <iostream>
#include<vector>
#include<string>
#include "chapter6.h"
using namespace std;
void swap_p(int *&p1, int *&p2);

int main() {
	int i1,i2;
	cout << "please input two number:";
	cin >> i1 >> i2;
	int *i1p = &i1, *i2p = &i2;
	cout << *i1p << ' ' << *i2p << endl;
	swap_p(i1p, i2p);
	cout << *i1p << ' ' << *i2p << endl;
	return 0;
};

void swap_p(int *&p1, int *&p2) {
	int *temp = p1;
	p1 = p2;
	p2 = temp;
	
}

