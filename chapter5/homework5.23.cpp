#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int i, j;
	cin >> i >> j;
	if (j == 0)
		throw runtime_error("j cannot be zero");
	else
		cout << "result is " << i / j << endl;
};


