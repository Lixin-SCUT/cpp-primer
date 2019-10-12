#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
#include<iterator>
using namespace std;

int main()
{
	vector<int> vi{ 1,1,2,3,3,4,5,6,7,8,9 };
	list<int> li;
	unique_copy(vi.begin(), vi.end(),inserter(li,li.begin()));
	for (auto i : li)
		cout << i << endl;
}

















