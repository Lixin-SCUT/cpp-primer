#include <iostream>
#include<vector>
#include<string>
#include "chapter6.h"
using namespace std;
void reset(int &p);

int main() {
	int i = 1;
	cout << i << endl;
	reset(i);
	cout << i << endl;
	return 0;
};

void reset(int &p) {
	p = 0;
}

