#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
using namespace std;

int main() {
	vector<int> li{1,2,3,4,5,6,7,8,9,10};
	deque<int> even;
	deque<int> odd;
	auto i = li.begin() + 3;
	cout << *i << endl;
	li.insert(li.end(), 0);
	cout << *i << endl;
	
}








