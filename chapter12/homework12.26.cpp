#pragma  warning (disable:4996) 
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



int main()
{
	int n = 10;
	allocator<string> alloc;
	string *const p = alloc.allocate(n);
	string s;
	string *q = p;
	while (cin >> s&&q != p + n)
		alloc.construct(q++, s);
	const size_t size = q - p;
	alloc.deallocate(p,size);
}





















