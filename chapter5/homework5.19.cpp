#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	string s1, s2;
	do {
		cin >> s1 >> s2;
		string output = s1.size() < s2.size() ? s1 : s2;
		cout << "the shorter is " << output << endl;
	}
	while (cin);
};


