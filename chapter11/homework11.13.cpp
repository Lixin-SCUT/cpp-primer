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
	vector<pair<string, int>> vp;
	string s;
	int i;
	while (cin >> s&&cin >> i) {
		vp.push_back(make_pair(s, i));
		vp.push_back({ s,i });
		vp.push_back(pair<string, int>(s, i));
	}
	for (auto p : vp)
		cout << p.first<<" "<<p.second << endl;
}


















