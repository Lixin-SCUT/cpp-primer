#include <iostream>
#include<vector>
#include<string>
#include "chapter6.h"
using namespace std;
void print(const int& i);
void print(int *beg, int *end);

int main() {
	int j[2] = { 0,1 };
	int i = 0;
	auto j_b = begin(j);
	auto j_e = end(j);
	print(i);
	print(j_b, j_e);
	return 0;
};

void print(const int& i) {
	cout << i << endl;
}
void print(int *beg,int *end) {
	while (beg != end)
		cout << *beg++ << endl;

}

