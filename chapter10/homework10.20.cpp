#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
using namespace std;


int main()
{
	vector<string> vs;
	string s;
	while (cin >> s)
		vs.push_back(s);
	int len = 6;
	int i = count_if(vs.begin(), vs.end(), [len](string &s) {return s.size() > len; });
	cout << i << endl;
}















