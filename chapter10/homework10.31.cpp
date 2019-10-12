#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>
#include<iterator>
#include<fstream>
using namespace std;

int main()
{
	istream_iterator<int> is(cin), eof;
	vector<int> vi(is, eof);
	sort(vi.begin(), vi.end());
	ostream_iterator<int> os(cout, " ");
	unique_copy(vi.begin(), vi.end(), os);
	cout << endl;
}

















