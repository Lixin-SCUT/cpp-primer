#pragma warning(disable:4996)
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
#include<sstream>
#include<memory>
#include "Sales_data.h"
using namespace std;

template<typename T, typename B> T Find(const T beg, const T end, B value) {
	for (T i = beg; i != end; ++i)
		if (*i == value)
			return i;
	return end;
}
int main() {
	vector<int> vi{ 1,2,3,4,5,6,7 };
	list<string> ls{ "1","2","3","4","5" };
	string s = "4";
	cout << *Find(ls.begin(), ls.end(), s) << endl;
}














