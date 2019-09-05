#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int i;
	vector<int> v_i;
	while (cin >> i)
		v_i.push_back(i);
	for (auto i : v_i)
		cout << i << ' ';
};
