#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<forward_list>
using namespace std;

int main() {
	vector<int> iv{ 0,1,1,2,3,5,8,13,21,55,89 };
	forward_list<int> fli(iv.begin(), iv.end());
	for (auto i = fli.begin(), i2 = fli.before_begin(); i != fli.end();) {
		if (*i % 2)
			i = fli.erase_after(i2);
		else
			++i, ++i2;
	}
	for (auto i : fli)
		cout << i << endl;
		
}









