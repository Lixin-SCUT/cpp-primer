#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<forward_list>
using namespace std;


int main() {
	vector<int> i;
	for (int x = 0; x < 100; ++x) {
		i.push_back(x);
		cout << i.capacity() << endl;
	}

}










