#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
using namespace std;

int main() {
	list<int> li{1,2,3,4,5,6,7,8,9,10};
	deque<int> even;
	deque<int> odd;
	for (const auto &i : li) {
		if (i % 2)
			odd.push_back(i);
		else
			even.push_back(i);
	}
	for (auto i : odd)
		cout << i << endl;
	for (auto i : even)
		cout << i << endl;
}








