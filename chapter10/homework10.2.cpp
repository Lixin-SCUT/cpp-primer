#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
using namespace std;


int main() {
	list<string> ls;
	string s;
	while (cin >> s)
		ls.push_back(s);
	cout<<count(ls.begin(), ls.end(), "123")<<endl;
}











