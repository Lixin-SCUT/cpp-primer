#include <iostream>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<forward_list>
using namespace std;
void sreplace(string s, string oldVal, string newVal);

int main() {
	string s = { "thosadkjahsjkdasdkjasthru" };
	sreplace(s, "tho", "though");
	sreplace(s, "thru", "through");
}

void sreplace(string s, string oldVal, string newVal) {
	for (auto i = s.begin(); i < s.end() - oldVal.size()+1; ++i)
		if (s.substr(i - s.begin(), oldVal.size()) == oldVal) {
			s.erase(i - s.begin(), oldVal.size());
			s.insert(i - s.begin(), newVal);
		}		
	cout << s << endl;
}








