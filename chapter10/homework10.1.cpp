#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main() {
	vector<int> vi;
	int i;
	while (cin >> i)
		vi.push_back(i);
	cout<<count(vi.begin(), vi.end(), 123)<<endl;
}











