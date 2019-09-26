#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
using namespace std;
void elimDups(vector<string> &words);

int main()
{
	vector<string> vs;
	string s;
	while (cin >> s)
		vs.push_back(s);
	for (auto i : vs)
		cout << i << " ";
	cout << endl;
	elimDups(vs);
}

void elimDups(vector<string> &words) {
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	for (auto i : words)
		cout << i << " " ;
	cout << endl;
	words.erase(end_unique, words.end());
	for (auto i : words)
		cout << i << " ";
	cout << endl;
}













