#include <iostream>
#include<string>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	if (!s.empty())
		for (char &c : s) {
			if (!ispunct(c))
				cout << c;
		}
};
