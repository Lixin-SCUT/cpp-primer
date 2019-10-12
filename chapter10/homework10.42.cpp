#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
#include<iterator>
#include<fstream>

using namespace std;



int main()
{
	list<string> vs;
	string s;
	while (cin >> s)
		vs.push_back(s);
	for (auto i : vs)
		cout << i << " ";
	cout << endl;
	elimDups(vs);
}


void elimDups(list<string> &words) {
	words.sort();
	words.unique();
	for (auto i : words)
		cout << i << " ";
	cout << endl;
}















