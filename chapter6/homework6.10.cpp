#include <iostream>
#include<vector>
#include<string>
#include "chapter6.h"
using namespace std;
int swap_p(int *p1, int *p2);

int main() {
	int i1 = 0, i2 = 1;
	cout << i1 << ' ' << i2 << endl;
	int *i1p = &i1, *i2p = &i2;
	swap_p(i1p, i2p);
	cout << i1 << ' ' << i2 << endl;
	return 0;
};

int swap_p(int *p1, int *p2) {
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	return 1;
}
}

