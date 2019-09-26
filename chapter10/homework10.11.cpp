#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
using namespace std;
void elimDups(vector<string> &words);
bool isShorter(const string &s1, const string &s2);

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
	stable_sort(words.begin(), words.end(),isShorter);
	auto end_unique = unique(words.begin(), words.end());
	for (auto i : words)
		cout << i << " " ;
	cout << endl;
	words.erase(end_unique, words.end());
	for (auto i : words)
		cout << i << " ";
	cout << endl;
}

bool isShorter(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}











