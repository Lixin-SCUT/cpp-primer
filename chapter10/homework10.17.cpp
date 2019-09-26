#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include "Sales_data.h"
using namespace std;


int main()
{
	vector<Sales_Data> vs;
	string s;
	while (cin >> s)
		vs.push_back(Sales_Data(s));
	for (auto i : vs)
		cout << i.ISBN << " ";
	cout << endl;
	int s_size = 5;
	stable_sort(vs.begin(), vs.end(), [](const Sales_Data &s1, const Sales_Data &s2) {return s1.ISBN < s2.ISBN; });
	for (auto i : vs)
		cout << i.ISBN << " ";
	cout << endl;
}

bool isShorter(const Sales_Data &s1, const Sales_Data &s2) {
	int result = s1.ISBN.compare(s2.ISBN);
	if (result < 0)
		return true;
	else
		return false;
}














