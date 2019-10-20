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
using namespace std;

void readvi(vector<int> &vi) {
	while (cin) {
		int i;
		cin >> i;
		vi.push_back(i);
	}
}

void writevi(vector<int> &vi) {
	cout << vi.size() << endl;
	for (auto i : vi)
		cout << i << endl;
}

int main()
{
	shared_ptr<vector<int>> vi =make_shared<vector<int>>();
	readvi(*vi);
	writevi(*vi);
}





















