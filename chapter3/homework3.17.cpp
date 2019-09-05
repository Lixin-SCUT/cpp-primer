#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<string> v_s ;
	string s;
	while (cin >> s)
		v_s.push_back(s);
	for (auto &s : v_s)
		for (auto &e : s)
			if (islower(e))
				e = toupper(e);
	for (auto s : v_s)
			cout << s << ' ';
};
