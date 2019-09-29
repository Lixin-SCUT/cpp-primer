#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
#include"Sales_data.h"
using namespace std;
using namespace std::placeholders;
bool check_size(int i, int len);


int main()
{

}

void biggies(vector<string> &words, vector<string>::size_type sz) {
	elimDups(words);
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b) {return a.size() < b.size(); });
	auto wc = partition(words.begin(), words.end(), bind(check_size, _1, sz));
	auto count = wc - words.begin();
	cout << count << " " << make_plural(count, "word", "s") << " of length" << sz << " or longer" << endl;
	for_each(word.begin(), wc[](const string &s) { cout << s << " "; });
	cout << endl
}

bool check_size(string s, int len) {
	return s.size()> len;
}















