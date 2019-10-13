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

using namespace std;



int main()
{
	map<string, int> map_s;
	set<string> set_s{ "123","456", "789" };
	string s;
	while (cin>>s)
	{
		if (set_s.find(s) != set_s.end())
			++map_s[s];
	}
	for (auto i : map_s)
		cout << i.first<<" "<<i.second << endl;
}


















