#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
#include<iterator>
#include<deque>
using namespace std;

int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7,8,9 };
	deque<int> vii;
	copy(vi.begin(), vi.end(), inserter(vii, vii.begin()));
	for (auto i : vii)
		cout << i <<" ";
	cout << endl;
	deque<int> vib;
	copy(vi.begin(), vi.end(), back_inserter(vib));
	for (auto i : vib)
		cout << i << " ";
	cout << endl;
	deque<int> vif;
	copy(vi.begin(), vi.end(), front_inserter(vif));
	for (auto i : vif)
		cout << i << " ";
	cout << endl;
}

















