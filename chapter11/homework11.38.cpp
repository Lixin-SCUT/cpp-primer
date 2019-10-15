#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
#include<iterator>
#include<fstream>
#include<map>
#include<set>
#include<unordered_map>
using namespace std;
string numberToWords(int num);

int main()
{
	unordered_map<string, size_t> word_count;
	string word;
	while (cin >> word)
		if (!word_count.insert(make_pair(word, 1)).second)
			++word_count[word];
	for (const auto &w : word_count)
		cout << w.first << " " << w.second << endl;
}


















