#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
#include<iterator>
#include<fstream>
#include "Sales_item.h"
using namespace std;
bool compareISBN(const Sales_item &s1, const Sales_item &s2);

int main()
{
	istream_iterator < Sales_item > is(cin),eof;
	vector<Sales_item> vs(is,eof);
	stable_sort(vs.begin(), vs.end(), compareISBN);
	for (auto i = vs.begin(); i < vs.end(); ++i) {
		auto j = i;
		while (j<vs.end()&&(*j).isbn == (*i).isbn)
			++j;
		Sales_item temp=*i;
		accumulate(i, j-1, temp);
		i = j;
	}
}

bool compareISBN(const Sales_item &s1, const Sales_item &s2) {
	int result = s1.isbn.compare(s2.isbn);
	if (result < 0)
		return true;
	else
		return false;
}















