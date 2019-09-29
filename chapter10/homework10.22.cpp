#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
using namespace std;
bool size6(string &s);

int main()
{
		vector<string> vs;
		string s;
		while (cin >> s)
			vs.push_back(s);
		int len = 6;
		int i = count_if(vs.begin(), vs.end(), size6);
		cout << i << endl;

}

bool size6(string &s) {
	int len = 6;
	return s.size() > len;
}















