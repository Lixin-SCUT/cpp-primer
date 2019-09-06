#include <iostream>
#include<vector>
using namespace std;

int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> i (begin(a),end(a));
	for (auto x : i)
		cout << x << ' ';
};


