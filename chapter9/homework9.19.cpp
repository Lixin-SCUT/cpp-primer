#include <iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;

int main() {
	string s;
	list<string> ds;
	while (cin >> s)
		ds.push_back(s);
	for (const auto &i : ds) 
		cout << i << endl;
}








