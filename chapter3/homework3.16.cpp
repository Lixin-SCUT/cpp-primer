#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string s;
	vector<string> v_s;
	while (cin >> s)
		v_s.push_back(s);
	for (auto s : v_s)
		cout << s << ' ';
};
