#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<forward_list>
using namespace std;

int main() {
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> iv(begin(ia), end(ia));
	list<int> il(begin(ia), end(ia));
	auto i = iv.begin();
	while (i != iv.end())
		if (!(*i % 2))
			i = iv.erase(i);
		else
			++i;
	for (auto x : iv)
		cout << x << endl;
	auto i1 = il.begin();
	while (i1 != il.end())
		if (*i1 % 2)
			i1 = il.erase(i1);
		else
			++i1;
	for (auto x : il)
		cout << x << endl;
}









