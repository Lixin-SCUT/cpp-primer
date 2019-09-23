#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
using namespace std;

int main() {
	vector<int> iv{1,2,3,4,5};
	auto i1 = iv.begin(),i2=iv.begin();
	iv.erase(i1, i2);
	cout << *iv.begin() << endl;
	auto i3 = iv.end(), i4 = iv.end();
	iv.erase(i3, i4);
	cout << iv.back() << endl;
}








