#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<int> v{1,2,3,4,5,6};
	cout << v.size() << endl;
	for (auto i = v.begin();i!=v.end();++i)
		cout << *i << ' ';
};
