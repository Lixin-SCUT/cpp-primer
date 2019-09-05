#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<int> v_i;
	int i;
	while (cin >> i)
		v_i.push_back(i);
	for (int x = 0; x < v_i.size()-1; ++x)
		cout << v_i[x] + v_i[x + 1] << ' ';
	cout << endl;
	for (int x = 0,l = v_i.size(); x <  (v_i.size()+1)/2; ++x)
		cout << v_i[x] + v_i[l-1-x] << ' ';
};
