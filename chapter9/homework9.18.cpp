#include <iostream>
#include<vector>
#include<string>
#include<deque>
using namespace std;

int main() {
	string s;
	deque<string> ds;
	while (cin >> s)
		ds.push_back(s);
	for (const auto &i : ds) 
		cout << i << endl;
}








