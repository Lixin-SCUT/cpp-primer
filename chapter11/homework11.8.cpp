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
	vector<string> vs;
	string s;
	while (cin >> s)
		if (find(vs.begin(), vs.end(), s) == vs.end())
			vs.push_back(s);
}


















