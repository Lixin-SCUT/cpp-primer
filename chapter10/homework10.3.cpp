#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
using namespace std;


int main() {
		vector<int> vi;
		int i;
		while (cin >> i)
			vi.push_back(i);
		cout << accumulate(vi.cbegin(), vi.cend(), 0) << endl;

}











